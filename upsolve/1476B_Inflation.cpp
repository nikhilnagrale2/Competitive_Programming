/*
  Problem Link    :   https://codeforces.com/problemset/problem/1476/B
  Contest Link    :   https://codeforces.com/contest/1476/problem/B
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
        vector<long long> a(n);
        vector<long long> pre(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long ans = 0;
        long long sum = 0;

        pre[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            pre[i] += ans;
            if (a[i + 1] * 100 > k * pre[i])
            {
                long long val = (a[i + 1] * 100 - k * pre[i]) / k;
                if ((a[i + 1] * 100 - k * pre[i]) % k)
                {
                    val++;
                }
                ans += val;
            }
        }
        cout << ans << endl;
    }
    return 0;
}