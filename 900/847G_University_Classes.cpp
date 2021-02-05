/*
  Problem Link    :   https://codeforces.com/problemset/problem/847/G
  Contest Link    :   https://codeforces.com/contest/847/problem/G
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
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0, curr = 0;
    for (int j = 0; j < a[0].length(); j++)
    {
        curr = 0;
        for (int i = 0; i < n; i++)
        {
            curr += (a[i][j] - '0');
        }
        ans = max(ans, curr);
    }
    cout << ans << endl;
    return 0;
}