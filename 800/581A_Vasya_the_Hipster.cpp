/*
    Problem Link    :   https://codeforces.com/problemset/problem/581/A
    Contest Link    :   https://codeforces.com/contest/581/problem/A
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
    cout << min(a, b) << " " << (max(a, b) - min(a, b)) / 2 << endl;
    return 0;
}