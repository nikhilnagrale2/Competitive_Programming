/*
  Problem Link    :   https://codeforces.com/problemset/problem/1455/B
  Contest Link    :   https://codeforces.com/contest/1455/problem/B
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
        int cur = 0;
        int i = 1;
        while (cur < n)
            cur += i++;
        if (cur == n + 1)
            cout << i << endl;
        else
            cout << i - 1 << endl;
    }
    return 0;
}