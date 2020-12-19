/*
  Problem Link    :   https://codeforces.com/problemset/problem/1457/B
  Contest Link    :   https://codeforces.com/contest/1457/problem/B
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
        vector<long long> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        long long ans = INT_MAX;
        for (int i = 1; i <= 100; i++)
        {
            long long curr = 0;
            for (int j = 0; j < n; j++)
            {
                if (c[j] != i)
                {
                    curr++;
                    j += k - 1;
                }
            }
            ans = min(curr, ans);
        }
        cout << ans << endl;
    }
    return 0;
}