/*
  Problem Link    :   https://codeforces.com/problemset/problem/998/B
  Contest Link    :   https://codeforces.com/contest/998/problem/B
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
    int o = 0, n, B, x = 0;
    cin >> n >> B;
    vector<int> a(n);
    vector<int> b;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] % 2 == 0)
            o++;
        else
            o--;
        if (o == 0)
        {
            b.push_back(abs(a[i] - a[i + 1]));
            x++;
        }
    }
    sort(b.begin(), b.end());
    int i = 0;
    for (i = 0; i < x && B >= b[i]; i++)
    {
        B -= b[i];
    }
    cout << i << endl;
    return 0;
}