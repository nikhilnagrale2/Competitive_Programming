/*
  Problem Link    :   https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
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

long long n, x, y;

bool good(long long m)
{
    return (m / x) + (m / y) >= n - 1;
}

int main()
{
    cin >> n >> x >> y;
    long long l = 0, r = 1e9;
    if (n == 1)
    {
        cout << min(x, y) << endl;
        return 0;
    }
    while (r > l + 1)
    {
        long long m = (l + r) / 2;
        if (good(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << r + min(x, y) << endl;

    return 0;
}