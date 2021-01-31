/*
  Problem Link    :   https://codeforces.com/problemset/problem/1471/A
  Contest Link    :   https://codeforces.com/contest/1471/problem/A
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
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        long long sum = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            sum2 += ceil(a[i] / (x * 1.0));
        }
        long long q = ceil(sum / (x * 1.0));
        cout << q << " " << sum2 << endl;
    }
    return 0;
}