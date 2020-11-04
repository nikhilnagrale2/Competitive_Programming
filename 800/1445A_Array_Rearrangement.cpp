/*
  Problem Link    :   https://codeforces.com/problemset/problem/1445/A
  Contest Link    :   https://codeforces.com/contest/1445/problem/A
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
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        bool ans = true;

        for (int i = 0; i < n; i++)
            if (a[i] + b[i] > x)
                ans = false;

        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}