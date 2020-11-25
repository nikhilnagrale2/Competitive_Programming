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
        if (a[i] % 2 == 1 || a[i] % 2 == -1)
        {
            if (one)
                --a[i];
            else
                ++a[i];
            one = !one;
        }
        cout << a[i] / 2 << endl;
    }
    return 0;
}