/*
    Problem Link    :   https://codeforces.com/problemset/problem/677/A
    Contest Link    :   https://codeforces.com/contest/677/problem/A
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
    int n, h;
    cin >> n >> h;
    vector<int> v;
    int temp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > h)
            ans += 2;
        else
            ans++;
    }
    cout << ans << endl;
    return 0;
}