/*
    Problem Link    :   https://codeforces.com/problemset/problem/732/A
    Contest Link    :   https://codeforces.com/contest/732/problem/A
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
    int k, r;
    cin >> k >> r;
    int i = 0;
    for (i = 1;; i++)
    {
        if (k * i % 10 == 0 || k * i % 10 == r)
            break;
    }
    cout << i << endl;
    return 0;
}