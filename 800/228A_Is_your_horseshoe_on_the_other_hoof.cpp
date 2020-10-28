/*
    Problem Link    :   https://codeforces.com/problemset/problem/228/A
    Contest Link    :   https://codeforces.com/contest/228/problem/A
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
    set<long long> s;
    int temp;
    int t = 4;
    while (t--)
    {
        cin >> temp;
        s.insert(temp);
    }
    cout << 4 - s.size() << endl;
    return 0;
}