/*
    Problem Link    :   https://codeforces.com/problemset/problem/1388/A
    Contest Link    :   https://codeforces.com/contest/1388/problem/A
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
        int n;
        cin >> n;
        if (n <= 30)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            if (n == 36 || n == 40 || n == 44)
                cout << "6 10 15 " << n - 31 << endl;
            else
                cout << "6 10 14 " << n - 30 << endl;
        }
    }
    return 0;
}