/*
  Problem Link    :   https://codeforces.com/problemset/problem/1452/B
  Contest Link    :   https://codeforces.com/contest/1452/problem/B
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
        long long n, sum = 0;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        long long Max = *max_element(a.begin(), a.end());
        if ((n - 1) * Max > sum)
        {
            cout << (n - 1) * Max - sum << endl;
        }
        else if ((n - 1) * Max == sum)
        {
            cout << 0 << endl;
        }
        else
        {
            if (sum % (n - 1) == 0)
                cout << 0 << endl;
            else
                cout << n - 1 - sum % (n - 1) << endl;
        }
    }
    return 0;
}