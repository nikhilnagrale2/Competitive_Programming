/*
  Problem Link    :   https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D
  Contest Link    :   https://codeforces.com/edu/course/2/lesson/6/2/practice
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int m, n;
vector<pair<int, pair<int, int>>> a;

bool good(int m)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int t = a[i].first, z = a[i].second.first, y = a[i].second.second;
        sum += m / (t * z + y) * z + min(z, (m % (t * z + y)) / t);
    }
    return sum >= m;
}

int main()
{
    cin >> m >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    }
    int l = -1, r = 1e9;
    while (l<=r)
    {
        int m = (l + r) / 2;
        if (good(m))
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    cout << l << endl;

    return 0;
}