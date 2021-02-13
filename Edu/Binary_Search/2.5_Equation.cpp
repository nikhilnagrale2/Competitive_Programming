/*
  Problem Link    :   https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E
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

double c;
bool good(double m)
{
    return sqrt(m) + m * m >= c;
}

int main()
{
    cin >> c;
    double l = 0, r = 1e11;
    for (int i = 0; i < 100; i++)
    {
        double m = (l + r) / 2;
        if (good(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }

    cout << setprecision(20) << r << endl;
    return 0;
}