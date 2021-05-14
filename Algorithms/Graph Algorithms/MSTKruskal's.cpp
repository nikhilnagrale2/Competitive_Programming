#include <bits/stdc++.h>
using namespace std;

class DSU {
  int *parent;

 public:
  DSU(int n) {
    parent = new int[n];

    for (int i = 0; i < n; i++) {
      parent[i] = -1;
    }
  }

  int find(int i) {
    if (parent[i] == -1) return i;
    return find(parent[i]);
  }

  void unite(int x, int y) {
    int s1 = find(x);
    int s2 = find(y);

    if (s1 != s2) {
      parent[s2] = s1;
    }
  }
};

class Graph {
  vector<vector<int>> edgelist;
  int V;

 public:
  Graph(int V) { this->V = V; }

  void addEdge(int x, int y, int w) { edgelist.push_back({w, x, y}); }

  int kruskal_mst() {
    sort(edgelist.begin(), edgelist.end());

    DSU s(V);

    int ans = 0;
    for (auto edge : edgelist) {
      int weight = edge[0];
      int x = edge[1];
      int y = edge[2];

      if (s.find(x) != s.find(y)) {
        s.unite(x, y);
        ans += weight;
        cout << x + 1 << " " << y + 1 << " " << weight << endl;
      }
    }
    return ans;
  }
};

int main() {
  int V, edges;
  cin >> V >> edges;
  Graph g(V);
  for (int i = 0; i < edges; i++) {
    int x, y, weight;
    cin >> x >> y >> weight;
    g.addEdge(x - 1, y - 1, weight);
  }

  cout << g.kruskal_mst() << endl;

  return 0;
}
