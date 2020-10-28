/*
    Problem Link    :   https://codeforces.com/problemset/problem/617/A
    Contest Link    :   https://codeforces.com/contest/617/problem/A
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
    int x;
    cin >> x;
    int ans = x / 5;
    if (x % 5 != 0)
        ans++;
    cout << ans << endl;
    return 0;
}