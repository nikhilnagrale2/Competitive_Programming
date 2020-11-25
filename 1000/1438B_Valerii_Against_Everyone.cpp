/*
  Problem Link    :   https://codeforces.com/problemset/problem/1438/B
  Contest Link    :   https://codeforces.com/contest/1438/problem/B
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
        int n;
        cin >> n;
        vector<int> b(n), c(n);
        set<int> a;
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (auto x : b)
            a.insert(x);

        if (a.size() == n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}