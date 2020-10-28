/*
    Problem Link    :   https://codeforces.com/problemset/problem/791/A
    Contest Link    :   https://codeforces.com/contest/791/problem/A
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
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}