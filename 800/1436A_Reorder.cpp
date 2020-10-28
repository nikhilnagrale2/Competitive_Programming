/*
    Problem Link    :   https://codeforces.com/problemset/problem/1436/A
    Contest Link    :   https://codeforces.com/contest/1436/problem/A
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
        int n;
        float m;
        cin >> n >> m;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum == m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}