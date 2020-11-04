/*
  Problem Link    :   https://codeforces.com/problemset/problem/1443/B
  Contest Link    :   https://codeforces.com/contest/1443/problem/B
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
    itn t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int demand = INT_MAX;
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                ans += min(a, demand * b);
                demand = 0;
            }
            else
                demand++;
        }
        cout << ans << endl;
    }
    return 0;
}

//cin>>s+1; indexing will start from 1