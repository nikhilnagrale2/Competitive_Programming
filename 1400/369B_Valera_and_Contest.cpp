/*
  Problem Link    :   https://codeforces.com/problemset/problem/369/B
  Contest Link    :   https://codeforces.com/contest/369/problem/B
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/
// good trick
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, r, sall, sk;
    cin >> n >> k >> l >> r >> sall >> sk;
    vector<int> a(n);
    for (int i = 0; sall - sk; i++, sall--)
        a[i % (n - k)]++;
    for (int i = 0; sk; i++, sk--)
        a[i % k + (n - k)]++;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}