/*
    Problem Link    :   https://codeforces.com/problemset/problem/200/B
    Contest Link    :   https://codeforces.com/contest/200/problem/B
    Status          :   Accepted

    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double a[n];
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }
    cout << ans / n << endl;

    return 0;
}