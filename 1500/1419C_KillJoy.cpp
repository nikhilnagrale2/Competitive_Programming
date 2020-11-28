/*
  Problem Link    :   https://codeforces.com/problemset/problem/1419/C
  Contest Link    :   https://codeforces.com/contest/1419/problem/C
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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int cnt = 0, sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            cnt += (a[i] == x);
            sum += a[i];
        }

        if (cnt == n)
        {
            cout << 0 << endl;
        }
        else if (cnt > 0)
        {
            cout << 1 << endl;
        }
        else if (sum == n * x)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}