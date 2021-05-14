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

const int N = 100005, M = 22;

vector<int> graph[N];

void bfs(int src, int n, int &ans)
{
    vector<int> dist(n + 1, INT_MAX);
    queue<int> q;
    q.push(src);
    dist[src] = 0;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (auto nbr : graph[cur])
        {
            if (dist[nbr] == INT_MAX)
                dist[nbr] = dist[cur] + 1, q.push(nbr);
            else if (dist[nbr] >= dist[cur])
                ans = min(ans, dist[nbr] + dist[cur] + 1);
        }
    }
}

int main()
{
    int n, m, ans;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    ans = n + 1;
    for (int i = 1; i <= n; i++)
    {
        bfs(i, n, ans);
    }

    if (ans == n + 1)
        cout << "No cycle" << endl;
    else
        cout << "shortest cycle is of length" << ans << endl;

    return 0;
}