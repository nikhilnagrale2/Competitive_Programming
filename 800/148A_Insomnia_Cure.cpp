/*
    Problem Link    :   https://codeforces.com/problemset/problem/148/A
    Contest Link    :   https://codeforces.com/contest/148/problem/A
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
    int a[4], d;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> d;
    int j;
    set<int> s;
    for (int i = 0; i < 4; i++)
    {
        j = 1;
        while (a[i] * j <= d)
        {
            if (a[i] * j <= d)
                s.insert(a[i] * j);
            j++;
        }
    }
    cout << s.size() << endl;
    return 0;
}