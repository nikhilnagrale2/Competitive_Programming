/*
    Problem Link    :   https://codeforces.com/problemset/problem/766/A
    Contest Link    :   https://codeforces.com/contest/766/problem/A
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
    string a,b;
    cin >> a >> b;
    if (a == b)
        cout << -1 << endl;
    else
        cout << max(a.size(), b.size()) << endl;
    return 0;
}