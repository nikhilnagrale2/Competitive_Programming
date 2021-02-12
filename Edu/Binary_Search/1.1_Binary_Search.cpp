/*
  Problem Link    :   https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
  Contest Link    :   https://codeforces.com/edu/course/2/lesson/6/1/practice
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool ok = false;
        while (r >= l)
        {
            int m = (l + r) / 2;
            if (a[m] == x)
            {
                ok = true;
                break;
            }
            else if (a[m] < x)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}