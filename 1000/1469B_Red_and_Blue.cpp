/*
  Problem Link    :   https://codeforces.com/problemset/problem/1469/B
  Contest Link    :   https://codeforces.com/contest/1469/problem/B
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
        vector<long long> r(n);
        for (int i = 0; i < n; i++)
            cin >> r[i];

        long long m;
        cin >> m;
        vector<long long> b(m);
        for (int i = 0; i < m; i++)
            cin >> b[i];

        long long max1 = 0, max2 = 0;
        max1 = max(r[0], max1);
        for (int i = 1; i < n; i++)
        {
            r[i] += r[i - 1];
            max1 = max(max1, r[i]);
        }
        max2 = max(b[0], max2);
        for (int j = 1; j < m; j++)
        {
            b[j] += b[j - 1];
            max2 = max(max2, b[j]);
        }

        long long ans = max1 + max2;
        cout << ans << endl;
    }
    return 0;
}