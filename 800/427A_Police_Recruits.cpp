/*
    Problem Link    :   https://codeforces.com/problemset/problem/427/A
    Contest Link    :   https://codeforces.com/contest/427/problem/A
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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0, police = 0;
    for (auto x : a)
    {
        if (x == -1 && police == 0)
        {
            if (!police)
                ans++;
            else
                police--;
        }
        else
            police += x;
    }
    cout << ans << endl;
    return 0;
}