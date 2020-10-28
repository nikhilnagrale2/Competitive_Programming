/*
    Problem Link    :   https://codeforces.com/problemset/problem/141/A
    Contest Link    :   https://codeforces.com/contest/141/problem/A
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
    string a, b, c, s;
    cin >> a >> b >> c;
    s = a + b;
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());
    if (s == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}