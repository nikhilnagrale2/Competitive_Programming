/*
    Problem Link    :   https://codeforces.com/problemset/problem/709/A
    Contest Link    :   https://codeforces.com/contest/709/problem/A
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
    long long n, b, d;
    cin >> n >> b >> d;
    long long sum = 0, temp, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp <= b)
        {
            sum += temp;
            if (sum > d)
            {
                sum = 0;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}