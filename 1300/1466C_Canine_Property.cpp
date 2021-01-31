/*
  Problem Link    :   https://codeforces.com/problemset/problem/1466/C
  Contest Link    :   https://codeforces.com/contest/1466/problem/C
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
    long long t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        long long ans = 0;
        long long x = 123;
        long long n = a.length();

        vector<long long> s(n);

        for (long long i = 0; i < n; i++)
        {
            s[i] = (int)a[i];
        }
        for (long long i = 0; i < n - 2; i++)
        {
            if (s[i] == s[i + 1])
            {
                ans++;
                s[i + 1] = x;
                x++;
            }
            if (s[i] == s[i + 2])
            {
                ans++;
                s[i + 2] = x;
                x++;
            }
        }

        if (s[n - 1] == s[n - 2])
            ans++;

        cout << ans << endl;
    }
    return 0;
}