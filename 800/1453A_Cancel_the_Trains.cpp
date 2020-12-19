/*
  Problem Link    :   https://codeforces.com/problemset/problem/1453/A
  Contest Link    :   https://codeforces.com/contest/1453/problem/A
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
        long long n, m;
        cin >> n >> m;
        set<int> c;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            c.insert(b[i]);
        }
        cout << n + m - c.size() << endl;
    }
    return 0;
}