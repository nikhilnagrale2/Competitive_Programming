/*
    Problem Link    :   https://codeforces.com/problemset/problem/467/A
    Contest Link    :   https://codeforces.com/contest/467/problem/A
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
    int count = 0;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2)
            count++;
    }
    cout << count << endl;
    return 0;
}