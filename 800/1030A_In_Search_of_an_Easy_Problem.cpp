/*
    Problem Link    :   https://codeforces.com/problemset/problem/1030/A
    Contest Link    :   https://codeforces.com/contest/1030/problem/A
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
    int temp;
    int ans = 0;
    while (n--)
    {
        cin >> temp;
        ans += temp;
    }
    if (ans)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
    return 0;
}