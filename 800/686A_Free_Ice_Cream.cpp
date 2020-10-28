/*
    Problem Link    :   https://codeforces.com/problemset/problem/686/A
    Contest Link    :   https://codeforces.com/contest/686/problem/A
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
    long long n, x, i, distress = 0;
    cin >> n >> x;
    char c;
    while (n--)
    {
        cin >> c >> i;
        if (c == '+')
        {
            x += i;
        }
        else
        {
            if (i <= x)
            {
                x -= i;
            }
            else
            {
                distress++;
            }
        }
    }
    cout << x << " " << distress << endl;
    return 0;
}