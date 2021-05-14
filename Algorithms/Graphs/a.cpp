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
    vector<vector<ll>> a(n + 1, vector<ll>(n + 1, 0));
    while (m--) {
        int u, v;
        cin >> u >> v;
        a[u][v] = 1;
        a[v][u] = 1;
    }
    int i, j;
    for (i = 1; i <= n; i++) {
        ll sum = 0;
        for (j = 1; j <= n; j++) {
            sum += a[i][j];
        }
        if (sum == 0) break;
    }
    for (j = 1; j <= n; j++)
        if (i != j) cout << i << " " << j << endl;
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