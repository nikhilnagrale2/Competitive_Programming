/*
  Problem Link    :   https://codeforces.com/problemset/problem/1455/D
  Contest Link    :   https://codeforces.com/contest/1455/problem/D
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

bool solve(vector<long long> &a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long cnt = 0;
        bool flag = false;
        while (solve(a))
        {
            cnt++;
            flag = false;
            long long i = 0;
            while (i < n && a[i] <= x)
            {
                i++;
            }
            if (i == n)
            {
                cout << -1 << endl;
                flag = true;
                break;
            }
            swap(a[i], x);
        }
        if (flag)
            continue;
        cout << cnt << endl;
    }
    return 0;
}