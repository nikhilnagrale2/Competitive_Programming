/*
    Problem Link    :   https://codeforces.com/problemset/problem/977/A
    Contest Link    :   https://codeforces.com/contest/977/problem/A
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
    while (k--)
    {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }
    cout << n << endl;
    return 0;
}