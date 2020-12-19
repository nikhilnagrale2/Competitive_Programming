/*
  Problem Link    :   https://codeforces.com/problemset/problem/1451/A
  Contest Link    :   https://codeforces.com/contest/1451/problem/A
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n == 3)
        return 2;
    if (n % 2 == 0)
        return 2;
    if (n % 2 == 1)
        return 3;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}