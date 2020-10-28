/*
    Problem Link    :   https://codeforces.com/problemset/problem/705/A
    Contest Link    :   https://codeforces.com/contest/705/problem/A
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
    string s;
    int i = 0;
    while (n--)
    {
        i++;
        if (i % 2 != 0)
            s += "I hate ";
        else
            s += "I love ";

        if (n == 0)
        {
            s += "it ";
        }
        else
            s += "that ";
    }
    cout << s << endl;
    return 0;
}