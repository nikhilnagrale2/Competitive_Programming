/*
    Problem Link    :   https://codeforces.com/problemset/problem/1154/A
    Contest Link    :   https://codeforces.com/contest/1154/problem/A
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
    {
        cin >> a[i];
    }
    sort(a, a + 4);
    cout << a[3] - a[0] << " " << a[3] - a[2] << " " << a[3] - a[1] << endl;
    return 0;
}