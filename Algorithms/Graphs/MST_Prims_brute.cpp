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
typedef long long ll;
const int mod = 1e9 + 7;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n];
    while (m--) {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u - 1].push_back({v - 1, wt});
        adj[v - 1].push_back({u - 1, wt});
    }
    int s;
    cin >> s;
    s--;
    vector<int> key(n, INT_MAX);
    vector<bool> mstset(n, false);
    vector<int> parent(n, -1);
    key[s] = 0;
    for (int i = 0; i < n - 1; i++) {
        int mini = INT_MAX;
        int u;
        for (int v = 0; v < n; v++) {
            if (mstset[v] == false && mini > key[v]) {
                mini = key[v];
                u = v;
            }
        }

        mstset[u] = true;
        for (auto nbr : adj[u]) {
            int weight = nbr.second;
            int node = nbr.first;
            if (mstset[node] == false && key[node] > weight) {
                key[node] = weight;
                parent[node] = u;
            }
        }
    }

    for (int i = 1; i < n; i++) cout << parent[i] << " - " << i << " \n";

    int cost = 0;
    for (int i = 0; i < n; i++) {
        cost += key[i];
    }
    cout << cost << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    cin >> test;
    while (test--) {
        solve();
    }

    return 0;
}
