/*
  Problem Link    :   https://codeforces.com/problemset/problem/978/B
  Contest Link    :   https://codeforces.com/contest/978/problem/B
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
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}