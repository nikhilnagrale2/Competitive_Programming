/*
    Problem Link    :   https://codeforces.com/problemset/problem/144/A
    Contest Link    :   https://codeforces.com/contest/144/problem/A
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
    int maxindex = 0;
    int minindex = 0;
    int maxvalue = INT_MIN;
    int minvalue = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp > maxvalue)
        {
            maxindex = i;
            maxvalue = temp;
        }
        if (temp <= minvalue)
        {
            minindex = i;
            minvalue = temp;
        }
    }

    int ans = (maxindex) + (n - minindex - 1);
    if (minindex < maxindex)
    {
        cout << ans - 1 << endl;
        ;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}