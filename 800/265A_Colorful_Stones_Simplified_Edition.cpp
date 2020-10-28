/*
    Problem Link    :   https://codeforces.com/problemset/problem/265/A
    Contest Link    :   https://codeforces.com/contest/265/problem/A
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
    string s, t;
    cin >> s >> t;
    int index = 1;
    for (auto x : t)
    {
        if (s[index - 1] == x)
            index++;
    }
    cout << index << endl;
    return 0;
}