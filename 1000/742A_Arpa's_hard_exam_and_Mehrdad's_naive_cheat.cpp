/*
  Problem Link    :   https://codeforces.com/problemset/problem/742/A
  Contest Link    :   https://codeforces.com/contest/742/problem/A
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

    int a[4] = {6, 8, 4, 2};
    if (n == 0)
        cout << 1 << endl;
    else
        cout << a[n % 4] << endl;
    return 0;
}