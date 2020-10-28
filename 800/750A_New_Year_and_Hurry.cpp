/*
    Problem Link    :   https://codeforces.com/problemset/problem/750/A
    Contest Link    :   https://codeforces.com/contest/750/problem/A
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
    int n, k;
    cin >> n >> k;
    int sum = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (5 * i);
        if (sum + k > 240)
            break;
        ans++;
    }
    cout << ans << endl;
    return 0;
}

//simple C++ code:24067296 https://codeforces.com/contest/750/submission/24067296
//shorter but harder C++ code: 24067301 https://codeforces.com/contest/750/submission/24067301