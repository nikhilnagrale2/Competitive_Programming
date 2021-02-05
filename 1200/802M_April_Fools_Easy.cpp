/*
  Problem Link    :   https://codeforces.com/problemset/problem/802/M
  Contest Link    :   https://codeforces.com/contest/802/problem/M
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
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}