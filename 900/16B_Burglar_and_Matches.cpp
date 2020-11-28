/*
  Problem Link    :   https://codeforces.com/problemset/problem/16/B
  Contest Link    :   https://codeforces.com/contest/16/problem/B
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
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i].second >> a[i].first;
    sort(a.begin(), a.end());
    long long sum = 0;
    for (int i = m - 1; i >= 0; i--)
    {
        if (n > 0)
        {
            if (n > a[i].second)
                n -= a[i].second;
            else if (n <= a[i].second)
            {
                a[i].second = n;
                n -= a[i].second;
            }
            sum += (a[i].second * a[i].first);
        }
    }
    cout << sum << endl;
    return 0;
}