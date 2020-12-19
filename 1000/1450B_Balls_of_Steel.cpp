/*
  Problem Link    :   https://codeforces.com/problemset/problem/1450/B
  Contest Link    :   https://codeforces.com/contest/1450/problem/B
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
        long long n, k;
        cin >> n >> k;
        vector<pair<long long, long long>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            cin >> a[i].second;
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = 0;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    long long dist = abs(a[i].first - a[j].first) + abs(a[i].second - a[j].second);
                    if (dist <= k)
                        ans++;
                }
            }
            if (ans == n - 1)
                break;
        }
        if (ans == n - 1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}