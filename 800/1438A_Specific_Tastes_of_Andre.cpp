/*
  Problem Link    :   https://codeforces.com/problemset/problem/1438/A
  Contest Link    :   https://codeforces.com/contest/1438/problem/A
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
        int n;
        cin >> n;
        int a = n;
        while (n--) // or simply print 1 n times
            cout << a << " ";
        cout << endl;
    }
    return 0;
}