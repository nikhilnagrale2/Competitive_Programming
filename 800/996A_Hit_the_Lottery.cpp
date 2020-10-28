/*
    Problem Link    :   https://codeforces.com/problemset/problem/996/A
    Contest Link    :   https://codeforces.com/contest/996/problem/A
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
    long long n;
    cin >> n;
    int ans = 0;
    int a[5] = {100, 20, 10, 5, 1};
    for (int x : a)
    {
        ans += n / x;
        n %= x;
    }
    cout << ans << endl;
    return 0;
}