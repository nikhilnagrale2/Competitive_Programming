/*
BFS Traversal

Time Complexity - O(N+E)
Space Complexity - O(N+E)+O(N)+O(N)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> bfs;
        vector<int> vis(V, 0);
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for (auto it : adj[node]) {
                if (!vis[it]) {
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }

        return bfs;
    }
};

int main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);  // uncomment this for undirected graph
        }
        Solution obj;
        vector<int> bfs = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < bfs.size(); i++) {
            cout << bfs[i] << " ";
        }
        cout << endl;
    }
    return 0;
}