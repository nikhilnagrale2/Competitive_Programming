/*
    Problem Link    :   https://codeforces.com/problemset/problem/767/A
    Contest Link    :   https://codeforces.com/contest/767/problem/A
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
    int n, top;
    cin >> n;
    top = n;
    vector<int> a(n);
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        visited[a[i]] = true;
        while (visited[top] == true)
            cout << top-- << " ";
        cout << endl;
    }
    return 0;
}

//10
//5 1 6 2 8 3 4 10 9 7