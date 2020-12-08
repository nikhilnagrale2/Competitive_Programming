/*
  Problem Link    :   https://codeforces.com/problemset/problem/810/B
  Contest Link    :   https://codeforces.com/contest/810/problem/B
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, f;
    cin >> n >> f;
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vp[i].first >> vp[i].second;
    }
    vector<pair<int, int>> pr(n);
    for (int i = 0; i < n; i++)
    {
        pr.push_back({min(2 * vp[i].first, vp[i].second) - min(vp[i].first, vp[i].second), i});
    }
    sort(pr.rbegin(), pr.rend());

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int idx = pr[i].second;
        if (i < f)
            ans += min(2 * vp[idx].first, vp[idx].second);
        else
            ans += min(vp[idx].first, vp[idx].second);
    }
    cout << ans << endl;
    return 0;
}