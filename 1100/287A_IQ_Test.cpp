/*
  Problem Link    :   https://codeforces.com/problemset/problem/287/A
  Contest Link    :   https://codeforces.com/contest/287/problem/A
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
    vector<string> a(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }

    bool flag = false;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            int cnt = 0;
            if (a[i][j] == '#')
                cnt++;
            if (a[i + 1][j] == '#')
                cnt++;
            if (a[i][j + 1] == '#')
                cnt++;
            if (a[i + 1][j + 1] == '#')
                cnt++;
            if (cnt != 2)
                flag = true;
        }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}