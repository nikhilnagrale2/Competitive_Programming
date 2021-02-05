/*
  Problem Link    :   https://codeforces.com/problemset/problem/1/A
  Contest Link    :   https://codeforces.com/contest/1/problem/A
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
    int n, n1, n2;
    cin >> n >> n1 >> n2;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    double ans = 0;
    double sum=0;
    if (n1 > n2)
        swap(n1, n2);
    for (int i = 0; i < n1; i++)
    {
        sum += a[i];
    }
    sum /= n1;
    ans+=sum;
    sum=0;
    for (int i = n1; i < n1 + n2; i++)
    {
        sum += a[i];
    }
    sum /= n2;
    ans+=sum;
    cout << fixed << setprecision(8) << ans << endl;
    return 0;
}