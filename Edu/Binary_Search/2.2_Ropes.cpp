/*
  Problem Link    :   https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
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

int n, k;
vector<int> a;

bool good(double m)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i] / m;
    return sum >= k;
}

int main()
{
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    double l = 0, r = 1e8;
    for (int i = 0; i < 100; i++)
    {
        double m = (l + r) / 2;
        if (good(m))
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    cout << setprecision(20) << l << "\n";
    return 0;
}