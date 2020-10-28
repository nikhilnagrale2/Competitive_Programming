/*
    Problem Link    :   https://codeforces.com/problemset/problem/381/A
    Contest Link    :   https://codeforces.com/contest/381/problem/A
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sereja = 0, dima = 0, turns = 0;
    for (int i = 0, j = n - 1; i <= j;)
    {
        turns++;
        if (a[i] >= a[j] && turns % 2 != 0)
        {
            sereja += a[i];
            i++;
        }
        else if (a[i] < a[j] && turns % 2 != 0)
        {
            sereja += a[j];
            j--;
        }

        if (a[i] >= a[j] && turns % 2 == 0)
        {
            dima += a[i];
            i++;
        }
        else if (a[i] < a[j] && turns % 2 == 0)
        {
            dima += a[j];
            j--;
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}