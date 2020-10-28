/*
    Problem Link    :   https://codeforces.com/problemset/problem/474/A
    Contest Link    :   https://codeforces.com/contest/474/problem/A
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
    string direction;
    cin >> direction;
    string s, ans;
    cin >> s;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < s.length(); i++)
    {
        if (keyboard.find(s[i]) != string::npos && direction == "R")
        {
            ans += keyboard[keyboard.find(s[i]) - 1];
        }
        else
        {
            ans += keyboard[keyboard.find(s[i]) + 1];
        }
    }
    cout << ans << endl;
    return 0;
}