/*
    Problem Link    :   https://codeforces.com/problemset/problem/1422/A
    Contest Link    :   https://codeforces.com/contest/1422/problem/A
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
        long long a, b, c;
        cin >> a >> b >> c;
        cout << max(a, max(b, c)) + min(a, min(b, c)) << endl;
    }
    return 0;
}
//max(a,b,c)
//a+b+c-1