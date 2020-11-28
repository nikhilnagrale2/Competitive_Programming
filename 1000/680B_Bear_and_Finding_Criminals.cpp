/*
  Problem Link    :   https://codeforces.com/problemset/problem/680/B
  Contest Link    :   https://codeforces.com/contest/680/problem/B
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
    int n, a, ans = 0;
    cin >> n >> a;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];

    for (int i = 0; i < n; i++)
    {
        if (t[i])
        {
            int left = i + 1 - a;
            int right = a - left - 1;
            if (right < 0 || right > n - 1 || t[i] == t[right])
                ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}
//can be done using two pointer