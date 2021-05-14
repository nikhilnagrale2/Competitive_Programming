#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<int> vis;

int main()
{
    int n, m;
    cin >> n >> m;
    graph.resize(n + 1);
    vis.resize(n + 1, 0);
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    set<int> next;
    vector<int> ans;
    ans.push_back(1);
    vis[1] = 1;
    while (ans.size() < n)
    {
        int i = ans.back();
        for (int nbr : graph[i])
            if (!vis[nbr])
                next.insert(nbr);

        auto it = next.begin();

        ans.push_back(*it);
        vis[*it] = 1;
        next.erase(it);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}