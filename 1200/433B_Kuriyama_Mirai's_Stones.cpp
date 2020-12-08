/*
  Problem Link    :   https://codeforces.com/problemset/problem/433/B
  Contest Link    :   https://codeforces.com/contest/433/problem/B
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
    long long n, m;
    cin >> n;
    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<long long> u(v);
    sort(u.begin(), u.end());

    for (int i = 1; i <= n; i++)
        u[i] += u[i - 1], v[i] += v[i - 1];

    cin >> m;
    while (m--)
    {
        long long type, l, r;
        cin >> type >> l >> r;
        long long sum = 0;
        if (type == 2)
        {
            sum += u[r] - u[l - 1];
        }
        else
        {
            sum += v[r] - v[l - 1];
        }
        cout << sum << endl;
    }
    return 0;
}