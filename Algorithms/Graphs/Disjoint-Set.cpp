/*
Disjoint Set

*/
#include <bits/stdc++.h>
using namespace std;

int parent[1000];
int ranks[1000];

void makeSet() {
    for (int i = 1; i <= 1000; i++) {
        parent[i] = i;
        ranks[i] = 0;
    }
}

int findPar(int node) {
    if (node == parent[node]) {
        return node;
    }
    return parent[node] = findPar(parent[node]);
}

void makeunion(int u, int v) {
    u = findPar(u);
    v = findPar(v);
    if (ranks[u] < ranks[v]) {
        parent[u] = v;
    } else if (ranks[v] < ranks[u]) {
        parent[v] = u;
    } else {
        parent[v] = u;
        ranks[u]++;
    }
}

int main() {
    makeSet();
    int m;
    cin >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        makeunion(u, v);
    }
    if (findPar(2) != findPar(3)) {
        cout << "Different" << endl;
    } else
        cout << "Same" << endl;

    return 0;
}