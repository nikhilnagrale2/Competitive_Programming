/*
  Problem Link    :   https://codeforces.com/problemset/problem/1454/B
  Contest Link    :   https://codeforces.com/contest/1454/problem/B
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        int unique = -1;
        int ans = 0;
        for (auto x : mp)
        {
            if (x.second == 1)
            {
                unique = x.first;
                break;
            }
        }
        if (unique == -1)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (unique == a[i])
                    ans = i + 1;
            }
            cout << ans << endl;
        }
    }
    return 0;
}