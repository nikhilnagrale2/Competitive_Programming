/*
  Problem Link    :   https://codeforces.com/problemset/problem/1082/A
  Contest Link    :   https://codeforces.com/contest/1082/problem/A
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int dist(int x, int y, int d)
{
    return (abs(x - y) + (d - 1)) / d;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, d, y;
        cin >> n >> x >> y >> d;
        int len = abs(x - y);
        int ans = INT_MAX;

        if (len % d == 0)
            ans = min(ans, dist(x, y, d));

        len = y - 1;
        if (len % d == 0)
            ans = min(ans, dist(x, 1, d) + dist(1, y, d));

        len = n - y;
        if (len % d == 0)
            ans = min(ans, dist(x, n, d) + dist(n, y, d));

        if (ans == INT_MAX)
            ans = -1;

        cout << ans << endl;
    }
    return 0;
}