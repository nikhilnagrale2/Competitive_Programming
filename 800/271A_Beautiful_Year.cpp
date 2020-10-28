/*
    Problem Link    :   https://codeforces.com/problemset/problem/271/A
    Contest Link    :   https://codeforces.com/contest/271/problem/A
    Status          :   Accepted

    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

bool areDistinct(int n)
{
    map<int, int> dis;
    int digit;
    while (n)
    {
        digit = n % 10;
        if (dis[digit])
        {
            return false;
        }
        dis[digit] = 1;
        n /= 10;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    while (++n)
    {
        if (areDistinct(n))
        {
            cout << n << endl;
            break;
        }
    }
    return 0;
}