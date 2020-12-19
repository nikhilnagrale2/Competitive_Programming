/*
  Problem Link    :   https://codeforces.com/problemset/problem/1463/A
  Contest Link    :   https://codeforces.com/contest/1463/problem/A
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
        long long a, b, c;
        cin >> a >> b >> c;
        int sum = (a + b + c) / 9;
        if (((a + b + c) % 9) == 0 && a >= sum && b >= sum && c >= sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
