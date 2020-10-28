/*
    Problem Link    :   https://codeforces.com/problemset/problem/768/A
    Contest Link    :   https://codeforces.com/contest/768/problem/A
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
    int maxmin = 0, MAX = 0, MIN = 1000000007;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        MAX = max(MAX, a[i]), MIN = min(MIN, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == MAX)
            maxmin++;
        if (a[i] == MIN)
            maxmin++;
    }
    if (MAX == MIN)
        cout << 0 << endl;
    else
        cout << (n - maxmin) << endl;
    return 0;
}