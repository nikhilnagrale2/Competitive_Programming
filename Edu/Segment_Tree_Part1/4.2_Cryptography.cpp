/*
  Problem Link    :   https://codeforces.com/edu/course/2/lesson/4/4/practice/contest/274684/problem/B
  Contest Link    :   https://codeforces.com/edu/course/2/lesson/4/4/practice
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;
int mod;
struct matrix
{
    int w, x, y, z;
};

struct segtree
{
    int size;
    vector<matrix> values;

    matrix Neutral = {1, 0, 0, 1};

    matrix merge(matrix &a, matrix &b)
    {
        return {
            ((a.w * b.w) % mod + (a.x * b.y) % mod) % mod,
            ((a.w * b.x) % mod + (a.x * b.z) % mod) % mod,
            ((a.y * b.w) % mod + (a.z * b.y) % mod) % mod,
            ((a.y * b.x) % mod + (a.z * b.z) % mod) % mod,
        };
    }

    matrix single(matrix &v)
    {
        return v;
    }

    void init(int n)
    {
        size = 1;
        while (size < n)
        {
            size *= 2;
        }
        values.resize(2 * size);
    }

    void build(vector<matrix> &a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < (int)a.size())
            {
                values[x] = single(a[lx]);
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);

        values[x] = merge(values[2 * x + 1], values[2 * x + 2]);
    }

    void build(vector<matrix> &a)
    {
        build(a, 0, 0, size);
    }

    void set(int i, matrix &v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            values[x] = single(v);
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m)
        {
            set(i, v, 2 * x + 1, lx, m);
        }
        else
        {
            set(i, v, 2 * x + 2, m, rx);
        }
        values[x] = merge(values[2 * x + 1], values[2 * x + 2]);
    }

    void set(int i, matrix &v)
    {
        set(i, v, 0, 0, size);
    }

    matrix Calc(int l, int r, int x, int lx, int rx)
    {
        if (l >= rx || r <= lx)
            return Neutral;
        if (l <= lx && r >= rx)
            return values[x];
        int m = (lx + rx) / 2;
        matrix s1 = Calc(l, r, 2 * x + 1, lx, m);
        matrix s2 = Calc(l, r, 2 * x + 2, m, rx);
        return merge(s1, s2);
    }

    matrix Calc(int l, int r)
    {
        return Calc(l, r, 0, 0, size);
    }

    // int find(int k, int x, int lx, int rx)
    // {
    //     if (rx - lx == 1)
    //         return lx;
    //     int m = (lx + rx) / 2;
    //     int sl = values[2 * x + 1];
    //     if (k <= sl)
    //     {
    //         return find(k, 2 * x + 1, lx, m);
    //     }
    //     else
    //     {
    //         return find(k - sl, 2 * x + 2, m, rx);
    //     }
    // }

    // int find(int k)
    // {
    //     return find(k, 0, 0, size);
    // }

    // int first_above(int v, int l, int x, int lx, int rx)
    // {
    //     if (values[x] < v)
    //         return -1;
    //     if (rx <= l)
    //         return -1;
    //     if (rx - lx == 1)
    //         return lx;
    //     int m = (lx + rx) / 2;
    //     int res = first_above(v, l, 2 * x + 1, lx, m);
    //     if (res == -1)
    //     {
    //         res = first_above(v, l, 2 * x + 2, m, rx);
    //     }
    //     return res;
    // }

    // int first_above(int v, int l)
    // {
    //     return first_above(v, l, 0, 0, size);
    // }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, n, m;
    cin >> r >> n >> m;
    mod = r;
    segtree st;
    int o = n;
    st.init(n);
    vector<matrix> matri(n);
    int i = 0;
    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        matri[i] = {a, b, c, d};
        i++;
    }

    st.build(matri);
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        matrix mat = st.Calc(l - 1, r);
        cout << mat.w << " " << mat.x << "\n";
        cout << mat.y << " " << mat.z << "\n";
        cout << "\n";
    }

    return 0;
}