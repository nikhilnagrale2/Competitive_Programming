/*
  Problem Link    :   https://codeforces.com/problemset/problem/847/M
  Contest Link    :   https://codeforces.com/contest/847/problem/M
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
    vector<long long> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int d = a[1] - a[0];
    bool ok = true;
    for (int i = 2; i < n; i++)
    {
        if (a[i] - a[i - 1] != d)
        {
            ok = false;
        }
    }
    if (ok)
    {
        cout << a[n - 1] + d << endl;
    }
    else
    {
        cout << a[n - 1] << endl;
    }
    return 0;
}