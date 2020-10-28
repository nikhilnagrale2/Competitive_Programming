/*
    Problem Link    :   https://codeforces.com/problemset/problem/59/A
    Contest Link    :   https://codeforces.com/contest/59/problem/A
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
    cin >> s;
    int u = 0, l = 0;

    for (auto x : s)
    {
        if (isupper(x))
            u++;
        else
            l++;
    }

    if (u > l)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    //instead of transform u can use for loop with toupper and tolower character by character.
    cout << s << endl;

    return 0;
}