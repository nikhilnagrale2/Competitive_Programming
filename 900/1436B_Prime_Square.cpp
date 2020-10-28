/*
    Problem Link    :   https://codeforces.com/problemset/problem/1436/B
    Contest Link    :   https://codeforces.com/contest/1436/problem/B
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == 1)
                s += "1 ";
            else
                s += "0 ";
        }
        for (int i = 0; i < n; i++)
        {
            cout << s << endl;
            string el;
            s.erase(s.end() - 1);
            el = s.back();
            el += " ";
            s.erase(s.end() - 1);
            s = el + s;
        }
    }
    return 0;
}