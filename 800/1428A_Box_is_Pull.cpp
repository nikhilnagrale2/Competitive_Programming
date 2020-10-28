/*
    Problem Link    :   https://codeforces.com/problemset/problem/1428/A
    Contest Link    :   https://codeforces.com/contest/1428/problem/A
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
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a == x || b == y)
            cout << abs(a - x) + abs(b - y) << endl;
        else
            cout << 2 + abs(x - a) + abs(y - b) << endl;
    }
    return 0;
}