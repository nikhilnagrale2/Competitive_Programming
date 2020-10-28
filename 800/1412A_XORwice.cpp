/*
    Problem Link    :   https://codeforces.com/problemset/problem/1412/A
    Contest Link    :   https://codeforces.com/contest/1412/problem/A
    Status          :   Accepted

    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

int findX(int a, int b)
{
    int j = 0, x = 0;
    while (a || b)
    {
        if ((a & 1) && (b & 1))
        {
            x += (1 << j);
        }
        a >>= 1;
        b >>= 1;
        j += 1;
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = findX(a, b);
        int ans = (a ^ x) + (b ^ x);
        cout << ans << endl;
    }

    return 0;
}

//can be solved by following direct formula
//a^b
//a^(a&b)+b^(a&b)