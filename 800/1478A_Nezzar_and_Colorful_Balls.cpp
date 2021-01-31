/*
  Problem Link    :   https://codeforces.com/problemset/problem/1478/A
  Contest Link    :   https://codeforces.com/contest/1479/problem/A
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
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<long long, long long> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        long long ans = 0;
        for (auto x : mp)
        {
            ans = max(ans, x.second);
        }
        cout << ans << endl;
    }
    return 0;
}