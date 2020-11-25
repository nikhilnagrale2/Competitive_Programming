/*
  Problem Link    :   https://codeforces.com/problemset/problem/1440/B
  Contest Link    :   https://codeforces.com/contest/1440/problem/B
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
        int n, k;
        cin >> n >> k;
        long long sum = 0;
        vector<int> a(n * k);
        for (int i = 0; i < n * k; i++)
        {
            cin >> a[i];
        }
        int median = n * k - 1 - ceil(n / 2);
        while (k--)
        {
            sum += a[median];
            median -= floor(n / 2) + 1;
        }
        cout << sum << endl;
    }
    return 0;
}