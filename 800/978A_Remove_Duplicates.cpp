/*
  Problem Link    :   https://codeforces.com/problemset/problem/978/A
  Contest Link    :   https://codeforces.com/contest/978/problem/A
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n - 1; i >= 0; i--)
    {
        bool ok = true;
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] == a[i])
            {
                ok = false;
                break;
            }
        }
        if (ok)
            b.push_back(a[i]);
    }
    cout << b.size() << endl;
    for (int i = b.size() - 1; i >= 0; i--)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}