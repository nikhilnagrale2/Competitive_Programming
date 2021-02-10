/*
  Problem Link    :   https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/E
  Contest Link    :   https://codeforces.com/edu/course/2/lesson/4/3/practice
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

struct segtree
{
    long long size;
    vector<long long> values;

    long long Neutral = 0;

    long long merge(long long a, long long b)
    {
        return a + b;
    }

    long long single(long long v)
    {
        return v;
    }

    void init(long long n)
    {
        size = 1;
        while (size < n)
        {
            size *= 2;
        }
        values.resize(2 * size);
    }

    void build(vector<long long> &a, long long x, long long lx, long long rx)
    {
        if (rx - lx == 1)
        {
            if (lx < (long long)a.size())
            {
                values[x] = single(a[lx]);
            }
            return;
        }
        long long m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        values[x] = merge(values[2 * x + 1], values[2 * x + 2]);
    }

    void build(vector<long long> &a)
    {
        build(a, 0, 0, size);
    }

    void set(long long i, long long v, long long x, long long lx, long long rx)
    {
        if (rx - lx == 1)
        {
            values[x] += single(v);
            return;
        }
        long long m = (lx + rx) / 2;
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

    void set(long long i, long long v)
    {
        set(i, v, 0, 0, size);
    }

    long long Calc(long long l, long long r, long long x, long long lx, long long rx)
    {
        if (l >= rx || r <= lx)
            return Neutral;
        if (l <= lx && r >= rx)
            return values[x];
        long long m = (lx + rx) / 2;
        long long s1 = Calc(l, r, 2 * x + 1, lx, m);
        long long s2 = Calc(l, r, 2 * x + 2, m, rx);
        return merge(s1, s2);
    }

    long long Calc(long long l, long long r)
    {
        return Calc(l, r, 0, 0, size);
    }

    long long find(long long k, long long x, long long lx, long long rx)
    {
        if (rx - lx == 1)
            return lx;
        long long m = (lx + rx) / 2;
        long long sl = values[2 * x + 1];
        if (k <= sl)
        {
            return find(k, 2 * x + 1, lx, m);
        }
        else
        {
            return find(k - sl, 2 * x + 2, m, rx);
        }
    }

    long long find(long long k)
    {
        return find(k, 0, 0, size);
    }

    long long first_above(long long v, long long l, long long x, long long lx, long long rx)
    {
        if (values[x] < v)
            return -1;
        if (rx <= l)
            return -1;
        if (rx - lx == 1)
            return lx;
        long long m = (lx + rx) / 2;
        long long res = first_above(v, l, 2 * x + 1, lx, m);
        if (res == -1)
        {
            res = first_above(v, l, 2 * x + 2, m, rx);
        }
        return res;
    }

    long long first_above(long long v, long long l)
    {
        return first_above(v, l, 0, 0, size);
    }
};

int main()
{
    long long n, m;
    cin >> n >> m;

    segtree st;
    st.init(n + 1);

    while (m--)
    {
        long long op;
        cin >> op;
        if (op == 1)
        {
            long long l, r, v;
            cin >> l >> r >> v;
            st.set(l, v);
            st.set(r, -v);
        }
        else
        {
            long long i;
            cin >> i;
            cout << st.Calc(0, i + 1) << endl;
        }
    }
    return 0;
}