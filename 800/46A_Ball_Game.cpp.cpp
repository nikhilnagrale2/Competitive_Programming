/*
  Problem Link    :   https://codeforces.com/problemset/problem/46/A
  Contest Link    :   https://codeforces.com/contest/46/problem/A
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
    int n;
    cin >> n;
    int x = n;
    int i = 1;
    int y = 0;
    n--;
    while (n--)
    {
        y = (i + y) % x;
        i++;
        cout << y + 1 << endl;
    }

    return 0;
}