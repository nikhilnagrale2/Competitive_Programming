/*
  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Leetcode        :   https://leetcode.com/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

bool dfs_helper(vector<int> graph[], int node, int *visited, int parent, int color)
{
    visited[node] = color;
    for (auto nbr : graph[node])
    {
        if (visited[nbr] == 0)
        {
            int subprob = dfs_helper(graph, nbr, visited, node, 3 - color);
            if (!subprob)
                return false;
        }
        else if (nbr != parent && color == visited[nbr])
            return false;
    }
    return true;
}

bool dfs(vector<int> graph[], int n)
{
    int visited[n] = {0}; // 0 not visited,1 visited color 1, 2 visited color 2
    int color = 1;
    int ans = dfs_helper(graph, 0, visited, -1, color);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -color " << visited[i] << endl;
    }

    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> graph[n];
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    if (dfs(graph, n))
        cout << "Bipartite" << endl;
    else
        cout << "Not Bipartite" << endl;

    return 0;
}

//  DFS/BFS