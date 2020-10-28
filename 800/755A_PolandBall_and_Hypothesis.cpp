/*
    Problem Link    :   https://codeforces.com/problemset/problem/755/A
    Contest Link    :   https://codeforces.com/contest/755/problem/A
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
    if (n > 2)
        cout << n - 2 << endl;
    else if (n == 2)
        cout << 4 << endl;
    else
        cout << 3 << endl;
    return 0;
}