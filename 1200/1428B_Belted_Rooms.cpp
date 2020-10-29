/*
  Problem Link    :   https://codeforces.com/problemset/problem/1428/B
  Contest Link    :   https://codeforces.com/contest/1428/problem/B
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
        int n, ans = 0, clockwise = 0, anticlockwise = 0;
        cin >> n;
        string s;
        cin >> s;
        for (auto x : s)
        {
            if (x == '<')
                anticlockwise = 1;
            else if (x == '>')
                clockwise = 1;
        }

        if (clockwise && anticlockwise)
        {
            s += s[0];
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '-' || s[i + 1] == '-')
                    ans++;
            }
            cout << ans << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}