/*
    Problem Link    :   https://codeforces.com/problemset/problem/313/A
    Contest Link    :   https://codeforces.com/contest/313/problem/A
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
    long long n;
    cin >> n;
    long long Max = n;
    if (n < 0)
    {
        if (n / 10 > Max)
            Max = n / 10;
        if (n % 10 + (n / 100) * 10 > Max)
            Max = n % 10 + (n / 100) * 10;
        cout << Max << endl;
    }
    else
    {
        cout << n << endl;
    }
    return 0;
}