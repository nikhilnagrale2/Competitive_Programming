/*
    Problem Link    :   https://codeforces.com/problemset/problem/1237/A
    Contest Link    :   https://codeforces.com/contest/1237/problem/A
    Status          :   Accepted

    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    bool one = true;
    for (int i = 0; i < n; ++i)
    {
        int ans = a[i] / 2;

        if (a[i] % 2 == 1)
        {
            if (a[i] < 0)
                --ans;
            if (up)
                ++ans;
            one = !one;
        }
    }
    cout << ans << endl;

    return 0;
}