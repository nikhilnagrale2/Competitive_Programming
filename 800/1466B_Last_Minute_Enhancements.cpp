/*
  Problem Link    :   https://codeforces.com/problemset/problem/1466/B
  Contest Link    :   https://codeforces.com/contest/1466/problem/B
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

        vector<long long> b(2 * n + 3, 1);

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] == 1)
            {
                ans++;
                b[a[i]] = 0;
            }
            else if (b[a[i] + 1] == 1)
            {
                ans++;
                b[a[i] + 1] = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}