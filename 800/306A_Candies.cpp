/*
    Problem Link    :   https://codeforces.com/problemset/problem/306/A
    Contest Link    :   https://codeforces.com/contest/306/problem/A
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
    int n, m;
    cin >> n >> m;
    vector<int> v(m, n / m);
    n %= m;
    for (int i = 0; i < m; i++)
    {
        if (n > 0)
            cout << v[i] + 1 << " ";
        else
            cout << v[i] << " ";
        n--;
    }
    return 0;
}