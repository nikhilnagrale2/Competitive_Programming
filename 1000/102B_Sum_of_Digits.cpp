/*
  Problem Link    :   https://codeforces.com/problemset/problem/102/B
  Contest Link    :   https://codeforces.com/contest/102/problem/B
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

string solve(string s)
{
    long long sum = 0;
    for (auto &x : s)
    {
        sum += x - '0';
    }
    return to_string(sum);
}
int main()
{
    string s;
    cin >> s;
    long long ans = 0;
    while (s.size() > 1)
    {
        s = solve(s);
        ans++;
    }
    cout << ans << endl;
    return 0;
}