/*
    Problem Link    :   https://codeforces.com/problemset/problem/318/A
    Contest Link    :   https://codeforces.com/contest/318/problem/A
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
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
        cout << 2 * k - 1 << endl;
    else
        cout << 2 * (k - (n + 1) / 2) << endl;
    return 0;
}