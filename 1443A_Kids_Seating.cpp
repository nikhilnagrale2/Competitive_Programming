/*
  Problem Link    :   https://codeforces.com/problemset/problem/1443/A
  Contest Link    :   https://codeforces.com/contest/1443/problem/A
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
        int sum = 4 * n;
        for (int i = 0; i < n; i++)
        {
            cout << sum-- << " ";
            sum--;
        }
        cout << endl;
    }
    return 0;
}