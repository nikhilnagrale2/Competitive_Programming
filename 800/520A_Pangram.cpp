/*
    Problem Link    :   https://codeforces.com/problemset/problem/520/A
    Contest Link    :   https://codeforces.com/contest/520/problem/A
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
    cin >> s;
    set<int> ans;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (char x : s)
    {
        ans.insert(x);
    }
    if (ans.size() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}