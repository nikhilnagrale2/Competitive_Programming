/*
    Problem Link    :   https://codeforces.com/problemset/problem/431/A
    Contest Link    :   https://codeforces.com/contest/431/problem/A
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
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    string s;
    cin >> s;
    int ans = 0;
    for (auto x : s)
    {
        ans += a[(int)x - '1'];
    }
    cout << ans << endl;
    return 0;
}