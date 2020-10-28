/*
    Problem Link    :   https://codeforces.com/problemset/problem/731/A
    Contest Link    :   https://codeforces.com/contest/731/problem/A
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
    string s;
    cin >> s;
    char pointer = 'a';
    int ans = 0;
    for (auto x : s)
    {
        ans += min(abs((int)x - (int)pointer), 26 - (abs((int)x - (int)pointer)));
        pointer = x;
    }
    cout << ans << endl;
    return 0;
}