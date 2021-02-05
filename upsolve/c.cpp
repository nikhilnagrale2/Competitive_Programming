/*
  Problem Link    :   https://codeforces.com/problemset/problem/1/A
  Contest Link    :   https://codeforces.com/contest/1/problem/A
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
    int n, m, b, g;

    cin >> n >> m;
    cin >> b;
    vector<int> x(101, 0);
    for (int i = 0; i < b; i++)
    {
        int h;
        cin >> h;
        x[h] = 1;
    }

    cin >> g;
    vector<int> y(101, 0);
    for (int i = 0; i < g; i++)
    {
        int h;
        cin >> h;
        y[h] = 1;
    }
    for (int i = 0; i <=100000; i++)
    {
        int p = i % n;
        int q = i % m;
        int ans = x[p] | y[q];
        x[p] = ans;
        y[q] = ans;
    }
    for (int i = 0; i < n; i++)
    {
        if (!x[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (!y[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}