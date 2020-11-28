/*
  Problem Link    :   https://codeforces.com/problemset/problem/746/B
  Contest Link    :   https://codeforces.com/contest/746/problem/B
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
    string ans, s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            ans += s[i];
        }
        else
        {
            ans = s[i] + ans;
        }
    }
    if (s.size() % 2 == 0)
    {
        reverse(ans.begin(), ans.end());
    }
    cout << ans << endl;
    return 0;
}