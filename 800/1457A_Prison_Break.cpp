/*
  Problem Link    :   https://codeforces.com/problemset/problem/1457/A
  Contest Link    :   https://codeforces.com/contest/1457/problem/A
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
        long long n, m, r, c;
        cin >> n >> m >> r >> c;
        long long ans = 0;
        ans = max(abs(1 - r) + abs(1 - c), max(abs(1 - r) + abs(m - c), max(abs(n - r) + abs(1 - c), abs(n - r) + abs(m - c))));
        cout << ans << endl;
    }
    return 0;
}
