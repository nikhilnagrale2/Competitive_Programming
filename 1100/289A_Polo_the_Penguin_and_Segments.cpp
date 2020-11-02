/*
  Problem Link    :   https://codeforces.com/problemset/problem/289/A
  Contest Link    :   https://codeforces.com/contest/289/problem/A
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
    int n, k, a, b;
    cin >> n >> k;
    int sum = 0;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum += (b - a + 1);
    }
    cout << (k - (sum) % k) % k << endl;

    return 0;
}