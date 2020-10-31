/*
  Problem Link    :   https://codeforces.com/problemset/problem/1420/B
  Contest Link    :   https://codeforces.com/contest/1420/problem/B
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Solve it on your own.
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
        vector<long long> a(n);
        vector<long long> b(32);
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int set = 0;
            while (a[i] > 0)
            {
                a[i] /= 2;
                set++;
            }
            b[set]++;
        }
        for (int i = 0; i < 32; i++)
        {
            if (b[i] > 1)
            {
                ans += (b[i] * (b[i] - 1)) / 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}