/*
Representation of graphs
*/
#include <bits/stdc++.h>
using namespace std;

//  Adjacency Matrix
//  Usable only upto 10^4 nodes
void AdjMatrix() {
    int nodes, edges;
    cin >> nodes >> edges;
    //  Declare Adjacency Matrix
    int adjmatrix[nodes + 1][nodes + 1] = {0};
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        //  For Weighted Graph instead of 1 store edge weight
        //  If it is directed graph then just do a[u][v] = 1 for edge u to v
        adjmatrix[u][v] = 1;  // for adjacency matrix - edge exist from u to v
        adjmatrix[v][u] = 1;  // for adjacency matrix - edge exist from v to u
    }
}

//  Adjacency List
//  Space Complexity - O(N+2E)
void AdjList() {
    int nodes, edges;
    cin >> nodes >> edges;
    vector<int> adj[nodes + 1];
    // if weighted instead of int replace with pair<int,int>
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        //  For Undirected Graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

int main() {
    AdjMatrix();
    AdjList();

    return 0;
}