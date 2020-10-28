/*
    Problem Link    :   https://codeforces.com/problemset/problem/567/A
    Contest Link    :   https://codeforces.com/contest/567/problem/A
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
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            cout << abs(x[i + 1] - x[i]) << " " << abs(x[n - 1] - x[i]) << endl;
        else if (i == n - 1)
            cout << abs(x[i] - x[i - 1]) << " " << abs(x[i] - x[0]) << endl;
        else
        {
            cout << min(abs(x[i + 1] - x[i]), abs(x[i] - x[i - 1])) << " " << max(abs(x[i] - x[0]), abs(x[n - 1] - x[i])) << endl;
        }
    }
    return 0;
}