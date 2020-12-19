/*
  Problem Link    :   https://codeforces.com/problemset/problem/1451/B
  Contest Link    :   https://codeforces.com/contest/1451/problem/B
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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            bool yes = false;
            for (int i = 0; i < l - 1; i++)
            {
                if (s[l - 1] == s[i])
                {
                    yes = true;
                }
            }
            for (int i = r; i < n; i++)
            {
                if (s[r - 1] == s[i])
                {
                    yes = true;
                }
            }
            if (yes)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}