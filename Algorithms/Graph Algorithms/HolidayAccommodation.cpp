/*
  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :)
*/

#include <bits/stdc++.h>
using namespace std;

class Graph
{
    long long V;
    // adjacency list
    list<pair<long long, long long>> *l;

public:
    Graph(long long v)
    {
        this->V = v;
        l = new list<pair<long long, long long>>[v];
    }

    void addedge(long long u, long long v, long long len)
    {
        l[u].push_back({v, len});
        l[v].push_back({u, len});
    }

    long long dfs_helper(long long node, bool *vis, long long *count, long long &ans)
    {
        vis[node] = true;
        count[node] = 1;

        for (auto nbr_pair : l[node])
        {
            long long nbr = nbr_pair.first;
            long long wt = nbr_pair.second;
            if (!vis[nbr])
            {
                count[node] += dfs_helper(nbr, vis, count, ans);
                ans += 2 * min(count[nbr], V - count[nbr]) * wt;
            }
        }
        return count[node];
    }

    long long dfs()
    {
        bool *vis = new bool[V];
        long long *count = new long long[V];
        for (long long i = 0; i < V; i++)
        {
            vis[i] = false;
            count[i] = 0;
        }
        long long ans = 0;
        dfs_helper(0, vis, count, ans);
        return ans;
    }
};

int main()
{
    long long t;
    cin >> t;
    long long cas = 0;
    while (t--)
    {
        cas++;
        long long n;
        cin >> n;
        Graph g(n);
        for (long long i = 0; i < n - 1; i++)
        {
            long long u, v, wt;
            cin >> u >> v >> wt;
            g.addedge(u - 1, v - 1, wt);
        }
        long long ans = g.dfs();
        cout << "Case #" << cas << ": " << ans << endl;
    }
    return 0;
}