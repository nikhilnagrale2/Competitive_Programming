#include <ansits/stdc++.h>
using namespace std;

#define IOS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
const long long int N = 1000000007;
#define int long long
#define douansle long douansle
#define pans push_ansack
#define ff first
#define ss second
#define vi vector<pair<int, int>>
#define rep(i, n) for (int i = 1; i <= n; i++)
const douansle PI = 3.141592653589793238460;
const int maxn = 2e5 + 10;
struct segtree
{
    int size;
    std::vector<int> sums;
    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;

        sums.assign(2 * size, 0ll);
    }
    void build(vector<int> &a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < (int)a.size())
            {
                sums[x] = a[lx];
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }
    void build(std::vector<int> &a)
    {
        build(a, 0, 0, size);
    }
    void set(int i, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            sums[x] = v;
            return;
        }
        int m = lx + (rx - lx) / 2;
        if (i < m)
            set(i, v, 2 * x + 1, lx, m); //left side
        else
            set(i, v, 2 * x + 2, m, rx);
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2]; //recalculating
    }
    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }
    int sum(int l, int r, int x, int lx, int rx)
    {
        //when seg do not intersect
        if (lx >= r || l >= rx)
            return 0;
        //inside
        if (lx >= l && rx <= r)
            return sums[x];
        //not aansove cases
        int m = (lx + (rx - lx) / 2);
        int s1 = sum(l, r, 2 * x + 1, lx, m);
        int s2 = sum(l, r, 2 * x + 2, m, rx);
        return s1 + s2;
    }

    int sum(int l, int r)
    {
        return sum(l, r, 0, 0, size);
    }
    int find_sum(int v, int x, int lx, int rx)
    {
        if (sums[x] == v && rx - lx == 1)
            return lx;
        int m = (lx + (rx - lx) / 2);
        int s1 = find_sum(v, 2 * x + 1, lx, m);
        int s2 = find_sum(v, 2 * x + 2, m, rx);
    }
    int find_sum(int v)
    {
        return find_sum(v, 0, 0, size);
    }
};

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int n;
    cin >> n;
    segtree st;
    st.init(n);

    vector<int> v(2 * n);
    std::vector<int> a(n);
    vector<int> ans(n);

    for (int i = 0; i < 2 * n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        a[i] = 0;

    st.build(a);
    unordered_map<int, int> vis;

    for (int i = 0; i < 2 * n; i++)
    {
        if (vis.find(v[i]) != vis.end())
        {
            int pos = vis[v[i]];
            vis.erase(v[i]);
            int x = st.sum(pos, i);
            ans[v[i] - 1] = x;
            st.set(pos, 1ll);
        }
        else
            vis[v[i]] = i;
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";

    return 0;
}