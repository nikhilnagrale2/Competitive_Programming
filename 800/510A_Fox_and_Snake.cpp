/*
    Problem Link    :   https://codeforces.com/problemset/problem/510/A
    Contest Link    :   https://codeforces.com/contest/510/problem/A
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
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 4 == 0)
            {
                if (j == 1)
                    cout << "#";
                else
                    cout << ".";
            }
            else if (i % 2 == 0)
            {
                if (j == m)
                    cout << "#";
                else
                    cout << ".";
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }
    return 0;
}