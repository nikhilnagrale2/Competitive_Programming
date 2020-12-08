/*
  Problem Link    :   https://codeforces.com/problemset/problem/492/B
  Contest Link    :   https://codeforces.com/contest/492/problem/B
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
    double n, l;
    cin >> n >> l;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double ans = max(a[0], l - a[n - 1]);
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, (a[i] - a[i - 1]) / 2);
    }
    printf("%.10f", ans);
    cout << endl;
    return 0;
}