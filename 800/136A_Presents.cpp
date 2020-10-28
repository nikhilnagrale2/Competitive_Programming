/*
    Problem Link    :   https://codeforces.com/problemset/problem/136/A
    Contest Link    :   https://codeforces.com/contest/136/problem/A
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
    int a[n];
    int num = 1;
    for (int x : v)
    {
        a[x - 1] = num++;
    }
    for (int x : a)
        cout << x << " ";
    return 0;
}