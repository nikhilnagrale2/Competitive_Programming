/*
  Problem Link    :   https://codeforces.com/problemset/problem/404/A
  Contest Link    :   https://codeforces.com/contest/404/problem/A
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
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    char c1 = a[0][0];
    char c2 = a[0][1];

    string ans = "YES";
    if (c1 == c2)
        ans = "NO";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i == n - 1 - j)
            {
                if (a[i][j] != c1)
                    ans = "NO";
            }
            else
            {
                if (a[i][j] != c2)
                    ans = "NO";
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}