#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main() {
    int nodes, edges, source;
    cin >> nodes >> edges;
    vector<pii> graph[nodes];

    int u, v, wt;
    for (int i = 0; i < edges; i++) {
        cin >> u >> v >> wt;
        graph[u].push_back({v, wt});
        graph[v].push_back({u, wt});
    }

    cin >> source;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    // min-heap ; In pair => (dist,from)

    vector<int> distance(nodes, INT_MAX);

    distance[source] = 0;
    pq.push({0, source});
    // (dist,from)

    while (!pq.empty()) {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        for (auto it : graph[prev]) {
            int next = it.first;
            int nextDist = it.second;
            if (distance[prev] + nextDist < distance[next]) {
                distance[next] = distance[prev] + nextDist;
                pq.push({distance[next], next});
            }
        }
    }

    cout << "The distances from source " << source << " are : " << endl;
    cout << "Vertex\t\tDistance from source" << endl;
    for (int i = 0; i < nodes; i++)
        cout << i << "\t\t" << distance[i] << " " << endl;

    return 0;
}
