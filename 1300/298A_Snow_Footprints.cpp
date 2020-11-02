/*
  Problem Link    :   https://codeforces.com/problemset/problem/298/A
  Contest Link    :   https://codeforces.com/contest/298/problem/A
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
    string s;
    cin >> s;
    int start = -1, end = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            start = i;
            if (end == -1)
                end = i - 1;
        }
        else if (s[i] == 'R')
        {
            end = i + 1;
            start = i;
        }
    }
    cout << start + 1 << " " << end + 1 << endl;

    return 0;
}