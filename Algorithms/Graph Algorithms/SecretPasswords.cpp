
#include <bits/stdc++.h>
using namespace std;

vector<int> vis;
vector<vector<int>> graph;
vector<vector<int>> idx;

void dfs(int i)
{
    if (vis[i])
        return;

    vis[i] = 1;
    for (auto nbr : graph[i])
        dfs(nbr);
}

int main()
{
    int n;
    cin >> n;
    idx.resize(26);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (char ch : s)
            idx[ch - 'a'].push_back(i);
    }

    graph.resize(n);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j + 1 < idx[i].size(); j++)
        {
            graph[idx[i][j]].push_back(idx[i][j + 1]);
            graph[idx[i][j + 1]].push_back(idx[i][j]);
        }
    }

    int ans = 0;
    vis.resize(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (vis[i])
            continue;
        dfs(i);
        ans++;
    }
    cout << ans << endl;

    return 0;
}