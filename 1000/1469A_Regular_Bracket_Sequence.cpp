/*
  Problem Link    :   https://codeforces.com/problemset/problem/1469/A
  Contest Link    :   https://codeforces.com/contest/1469/problem/A
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
        string s;
        cin >> s;
        if (s.size() % 2 == 1 || s[0] == ')' || s[s.length() - 1] == '(')
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}