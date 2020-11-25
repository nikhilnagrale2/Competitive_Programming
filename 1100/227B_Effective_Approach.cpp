/*
  Problem Link    :   https://codeforces.com/problemset/problem/227/B
  Contest Link    :   https://codeforces.com/contest/227/problem/B
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;
long long ans[1000001];

int main()
{
    long long n, m;
    long long ans1 = 0;
    long long ans2 = 0;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans[a[i]] = i + 1;
    }

    cin >> m;
    vector<long long> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        ans1 += ans[b[i]];
        ans2 += n - ans[b[i]] + 1;
    }

    cout << ans1 << " " << ans2 << endl;
    return 0;
}