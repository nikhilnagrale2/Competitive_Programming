/*
  Problem Link    :   https://codeforces.com/problemset/problem/1419/A
  Contest Link    :   https://codeforces.com/contest/1419/problem/A
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
        string s;
        cin >> s;
        bool even = false, odd = false;
        for (int i = 1; i <= n; i++)
            if (i % 2 == 1)
                odd = odd | ((s[i - 1] - '0') % 2 == 1);
            else
                even |= ((s[i - 1] - '0') % 2 == 0);

        if (n % 2 == 1)
            cout << (odd ? 1 : 2) << endl;
        else
            cout << (even ? 2 : 1) << endl;
    }
    return 0;
}