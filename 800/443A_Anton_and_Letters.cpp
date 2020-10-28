/*
    Problem Link    :   https://codeforces.com/problemset/problem/443/A
    Contest Link    :   https://codeforces.com/contest/443/problem/A
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
    string s;
    getline(cin, s);
    set<char> ans;
    for (auto x : s)
    {
        if (x == '{' || x == '}' || x == ' ' || x == ',')
            continue;
        ans.insert(x);
    }
    cout << ans.size() << endl;
    return 0;
}