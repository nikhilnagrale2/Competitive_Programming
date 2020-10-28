/*
  Problem Link    :   https://codeforces.com/problemset/problem/483/A
  Contest Link    :   https://codeforces.com/contest/483/problem/A
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
    long long l, r;
    cin >> l >> r;
    if (l % 2 != 0)
        l++;

    if (r - l <= 1) //              l + 2 > r also can be used
        cout << -1 << endl;
    else
        cout << l << " " << l + 1 << " " << l + 2 << endl;

    return 0;
}