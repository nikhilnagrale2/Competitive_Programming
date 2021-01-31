/*
  Problem Link    :   https://codeforces.com/problemset/problem/1473/A
  Contest Link    :   https://codeforces.com/contest/1473/problem/A
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
        long long n, d;
        cin >> n >> d;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool ok = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] <= d)
                {
                    ok = true;
                    break;
                }
            }
        }

        bool ok2 = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > d)
            {
                ok2 = false;
            }
        }

        if (ok || ok2)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}