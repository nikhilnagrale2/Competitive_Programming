#include <bits/stdc++.h>
using namespace std;

#define mod 998244353

vector<vector<int>> graph;
vector<int> vis;
long long ans = 1;
int cnt1 = 0, cnt0 = 0, can = 1;
int n;

int fast_exponentiation(int x, int y)
{
    if (!y)
        return 1;
    long long pt = fast_exponentiation(x, y / 2);
    pt *= pt, pt %= mod;
    if (y & 1)
        pt *= x, pt %= mod;
    return pt;
}

void dfs(int i, int parity = 2)
{
    if (vis[i])
    {
        if (3 - parity != vis[i])
            can = 0;
        return;
    }

    if (parity == 2)
        cnt0++, vis[i] = 1;
    else
        cnt1++, vis[i] = 2;

    for (auto nbr : graph[i])
        dfs(nbr, 3 - parity);
}

int solve()
{
    ans = 1;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << " -->";
        if (!vis[i])
        {
            cnt1 = 0, cnt0 = 0, can = 1;
            dfs(i, 2);
            if (!can)
                return 0;
            ans = (ans * (fast_exponentiation(2, cnt1) + fast_exponentiation(2, cnt0))) % mod;
        }
        // cout << ans << endl;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans = 1;
        graph.clear();
        vis.clear();
        cin >> n;
        graph.resize(n + 1);
        vis.resize(n + 1, 0);
        int m;
        cin >> m;
        while (m--)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        cout << solve() << endl;
    }
    return 0;
}