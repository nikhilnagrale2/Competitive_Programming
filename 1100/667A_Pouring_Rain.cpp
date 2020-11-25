/*
  Problem Link    :   https://codeforces.com/problemset/problem/667/A
  Contest Link    :   https://codeforces.com/contest/667/problem/A
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
    double d, h, v, e;
    cin >> d >> h >> v >> e;
    double rate = acos(-1.0) * d * d * e / 4;
    if (rate >= v)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        printf("%.9f", acos(-1.0) * d * d / 4.0 * h / (v - rate));
    }
    return 0;
}