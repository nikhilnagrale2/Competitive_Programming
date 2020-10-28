/*
  Problem Link    :   https://codeforces.com/problemset/problem/707/A
  Contest Link    :   https://codeforces.com/contest/707/problem/A
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
    int n, m;
    cin >> n >> m;
    string a;
    bool color = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            if (a == "C" || a == "M" || a == "Y")
                color = true;
        }
    }
    if (color)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;

    return 0;
}