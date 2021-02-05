/*
  Problem Link    :   https://codeforces.com/problemset/problem/988/A
  Contest Link    :   https://codeforces.com/contest/988/problem/A
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
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    set<int> x;
    vector<long long> b;
    long long y = k;
    for (int i = 0; (i < n); i++)
    {
        if (!x.count(a[i]))
        {
            x.insert(a[i]);
            b.push_back(i + 1);
        }
    }
    if (b.size() >= k)
    {
        cout << "YES" << endl;
        for (int i = 0; i < y; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}