/*
  Problem Link    :   https://codeforces.com/problemset/problem/1437/A
  Contest Link    :   https://codeforces.com/contest/1437/problem/A
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
        int l, r;
        cin >> l >> r;
        if (l * 2 > r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

/*
Another solution

if (r / l == 1)
    cout << "YES" << endl;
else
    cout << "NO" << endl;
*/