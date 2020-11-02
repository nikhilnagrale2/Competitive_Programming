/*
  Problem Link    :   https://codeforces.com/problemset/problem/699/A
  Contest Link    :   https://codeforces.com/contest/699/problem/A
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
    vector<int> x(n);
    bool ans = true;
    int val = INT_MAX;

    for (int i = 0; i < n; i++)
        cin >> x[i];

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            val = min((x[i + 1] - x[i]) / 2, val);
            ans = false;
        }
    }

    if (ans)
        cout << -1 << endl;
    else
        cout << val << endl;
    return 0;
}