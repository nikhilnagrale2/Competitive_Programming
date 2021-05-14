#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main() {
    int N, m;
    cin >> N >> m;
    vector<pii> adj[N];

    int a, b, wt;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> wt;
        adj[a - 1].push_back(make_pair(b - 1, wt));
        adj[b - 1].push_back(make_pair(a - 1, wt));
    }

    int s;
    cin >> s;
    s--;

    int parent[N];

    int key[N];

    bool mstSet[N];

    for (int i = 0; i < N; i++)
        key[i] = INT_MAX, mstSet[i] = false, parent[i] = -1;

    priority_queue<pii, vector<pii>, greater<pii>> pq;

    key[s] = 0;
    parent[s] = -1;
    pq.push({0, s});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if (mstSet[u]) continue;
        mstSet[u] = true;

        for (auto it : adj[u]) {
            int v = it.first;
            int weight = it.second;
            if (mstSet[v] == false && weight < key[v]) {
                parent[v] = u;
                key[v] = weight;
                pq.push({key[v], v});
            }
        }
    }

    // for (int i = 1; i < N; i++) cout << parent[i] << " - " << i << " \n";
    int cost = 0;
    for (int i = 0; i < N; i++) cost += key[i];
    cout << cost << endl;
    return 0;
}
