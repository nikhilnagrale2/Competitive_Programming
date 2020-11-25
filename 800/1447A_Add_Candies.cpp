/*
  Problem Link    :   https://codeforces.com/problemset/problem/1447/A
  Contest Link    :   https://codeforces.com/contest/1447/problem/A
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
        cout << n << endl;
        for (int i = 0; i < n; i++)
            cout << i + 1 << " ";
        cout << endl;
    }
    return 0;
}