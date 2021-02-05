/*
  Problem Link    :   https://codeforces.com/problemset/problem/1476/C
  Contest Link    :   https://codeforces.com/contest/1476/problem/C
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
        vector<long long> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long ans = 0, lastlen = 0;
        for (int i = 1; i < n; i++)
        {
            long long currlen = c[i] + 1 + abs(a[i] - b[i]);
            if (a[i] != b[i])
            {
                currlen = max(currlen, c[i] + 1 + lastlen - abs(a[i] - b[i]));
            }
            ans = max(ans, currlen);
            lastlen = currlen;
        }
        cout << ans << endl;
    }
    return 0;
}