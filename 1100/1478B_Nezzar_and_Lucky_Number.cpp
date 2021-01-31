/*
  Problem Link    :   https://codeforces.com/problemset/problem/1478/B
  Contest Link    :   https://codeforces.com/contest/1478/problem/B
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
        long long q, d;
        cin >> q >> d;
        vector<long long> a(q);
        for (int i = 0; i < q; i++)
            cin >> a[i];

        vector<int> b(q);
        if (d == 1)
        {
            for (int i = 0; i < q; i++)
                cout << "YES" << endl;

            continue;
        }
        for (int i = 0; i < q; i++)
        {
            int j = 0;
            bool ok = false;
            while (a[i] > 0)
            {
                string x = to_string(a[i]);
                for (int i = 0; i < x.size(); i++)
                {
                    if (x[i] - '0' == d)
                    {
                        ok = true;
                        break;
                    }
                }
                if (ok)
                {
                    break;
                }
                a[i] -= d;
            }
            if (ok)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}