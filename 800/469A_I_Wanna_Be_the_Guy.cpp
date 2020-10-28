/*
    Problem Link    :   https://codeforces.com/problemset/problem/469/A
    Contest Link    :   https://codeforces.com/contest/469/problem/A
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
    int n, p, q;
    set<int> s;
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    if (s.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}