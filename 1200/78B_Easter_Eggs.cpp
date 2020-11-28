/*
  Problem Link    :   https://codeforces.com/problemset/problem/78/B
  Contest Link    :   https://codeforces.com/contest/78/problem/B
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
    string s = "ROYGBIV";
    for (int i = 0; i < n - 3; i++)
        cout << s[i % 4];
    cout << "BIV";
    return 0;
}