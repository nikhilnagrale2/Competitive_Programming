/*
  Problem Link    :   https://codeforces.com/problemset/problem/514/A
  Contest Link    :   https://codeforces.com/contest/514/problem/A
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
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (i == 0 && n[i] == '9')
            continue;
        if (n[i] > '9' - (n[i] - '0'))
            n[i] = '9' - (n[i] - '0');
    }
    cout << n << endl;
    return 0;
}