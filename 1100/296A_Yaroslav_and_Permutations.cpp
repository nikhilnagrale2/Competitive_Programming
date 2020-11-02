/*
  Problem Link    :   https://codeforces.com/problemset/problem/296/A
  Contest Link    :   https://codeforces.com/contest/296/problem/A
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
    int n, Max = 0;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (int x : a)
    {
        if (mp[x] > Max)
            Max = mp[x];
    }

    if (Max <= (n + 1) / 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}