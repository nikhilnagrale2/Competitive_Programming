/*
  Problem Link    :   https://codeforces.com/problemset/problem/1453/B
  Contest Link    :   https://codeforces.com/contest/1453/problem/B
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long sum = 0, ans = 0, sol = 0, x = 0;

        for (int i = 1; i < n; i++)
            sum += abs(a[i] - a[i - 1]);

        ans = min(sum - abs(a[0] - a[1]), sum - abs(a[n - 1] - a[n - 2]));

        for (int i = 1; i < n - 1; i++)
        {
            x = sum;
            x -= abs(a[i] - a[i - 1]);
            x -= abs(a[i] - a[i + 1]);
            x += abs(a[i - 1] - a[i + 1]);
            ans = min(ans, x);
        }
        cout << ans << endl;
    }
    return 0;
}