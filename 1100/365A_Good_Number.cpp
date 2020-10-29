/*
  Problem Link    :   https://codeforces.com/problemset/problem/365/A
  Contest Link    :   https://codeforces.com/contest/365/problem/A
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char k;
    cin >> n >> k;
    vector<string> a(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        set<int> num;
        cin >> a[i];
        for (auto x : a[i])
        {
            if ((int)x <= (int)k)
            {
                num.insert(x);
            }
        }
        if (num.size() == (int)k - '0' + 1)
            ans++;
    }
    cout << ans << endl;
    return 0;
}