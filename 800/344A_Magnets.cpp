/*
    Problem Link    :   https://codeforces.com/problemset/problem/344/A
    Contest Link    :   https://codeforces.com/contest/344/problem/A
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
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
            ans++;
    }
    cout << ans + 1 << endl;
    return 0;
}