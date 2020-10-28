/*
    Problem Link    :   https://codeforces.com/problemset/problem/41/A
    Contest Link    :   https://codeforces.com/contest/41/problem/A
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
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length() / 2; i++)
    {
        swap(a[i], a[a.length() - 1 - i]);
    }
    //can also use reverse(a.begin(),a.end()); function instead :)
    if (a == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}