/*
    Problem Link    :   https://codeforces.com/problemset/problem/155/A
    Contest Link    :   https://codeforces.com/contest/155/problem/A
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int min = v[0], max = v[0], ans = 0;
    for (auto x : v)
    {
        if (x > max)
        {
            max = x;
            ans++;
        }
        if (x < min)
        {
            min = x;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}