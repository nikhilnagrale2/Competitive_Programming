/*
  Problem Link    :   https://codeforces.com/problemset/problem/1452/A
  Contest Link    :   https://codeforces.com/contest/1452/problem/A
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;
int countSteps(int x, int y)
{
    if (x == y)
        return x + y;
    else
        return 2 * max(x, y) - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << countSteps(x, y) << endl;
    }
    return 0;
}