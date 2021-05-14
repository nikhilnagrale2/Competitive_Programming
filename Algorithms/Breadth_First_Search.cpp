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
vector<vector<int>> adj;
int nodes;
int source;
queue<int> q;
vector<bool> visited(nodes);
vector<int> distance(nodes), parent(nodes);

//  shortest path from src to v
void shortestPath(int src, int v)
{
    if (!visited[v])
        cout << "No Path";
    else
    {
        vector<int> path;
        for (int x = v; x != -1, x = p[x])
            path.push_back(x);
        reverse(path.begin(), path.end());
        cout << "Path: ";
        for (int x : path)
            cout << v << " ";
    }
}

// Breadth First Search
void bfs()
{
    q.push(source);
    visited[source] = true;
    parent[source] = -1;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : adj[v])
        {
            if (!visited[u])
            {
                visited[u] = true;
                q.push(u);
                distance[u] = distance[v] + 1;
                parent[u] = parent[v];
            }
        }
    }
}

int main()
{

    return 0;
}