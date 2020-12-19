/*
  Problem Link    :   https://codeforces.com/problemset/problem/1462/A
  Contest Link    :   https://codeforces.com/contest/1462/problem/A
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
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0;
        int j = n - 1;
        vector<long long> b(n, 0);
        int k = 0;
        while (i <= j)
        {
            b[k++] = a[i++];
            if (i > j)
                break;
            b[k++] = a[j--];
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}

