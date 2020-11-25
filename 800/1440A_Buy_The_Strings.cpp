/*
  Problem Link    :   https://codeforces.com/problemset/problem/1440/A
  Contest Link    :   https://codeforces.com/contest/1440/problem/A
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
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                sum += min(c0, h + c1);
            }
            if (s[i] == '1')
            {
                sum += min(c1, h + c0);
            }
        }
        cout << sum << endl;
    }
    return 0;
}