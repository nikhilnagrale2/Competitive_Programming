/*
  Problem Link    :   https://codeforces.com/problemset/problem/225/A
  Contest Link    :   https://codeforces.com/contest/225/problem/A
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
    int n, x;
    cin >> n >> x;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == x || a == 7 - x || b == x || b == 7 - x)
            ok = false;
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
