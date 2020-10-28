/*
    Problem Link    :   https://codeforces.com/problemset/problem/734/A
    Contest Link    :   https://codeforces.com/contest/734/problem/A
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
    string s;
    cin >> s;
    int A = 0, D = 0;
    for (auto x : s)
    {
        if (x == 'A')
            A++;
        else
            D++;
    }
    if (A > D)
        cout << "Anton" << endl;
    else if (D > A)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}