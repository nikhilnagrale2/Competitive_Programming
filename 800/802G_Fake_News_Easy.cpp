/*
  Problem Link    :   https://codeforces.com/problemset/problem/802/G
  Contest Link    :   https://codeforces.com/contest/802/problem/G
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
    string s;
    cin >> s;
    string x = "heidi";
    int k = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (k < x.size() && s[i] == x[k])
            k++;
    }
    if (k == x.size())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}