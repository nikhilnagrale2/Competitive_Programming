/*
  Problem Link    :   https://codeforces.com/problemset/problem/1420/A
  Contest Link    :   https://codeforces.com/contest/1420/problem/A
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ok = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                ok = true;
                cout << "YES" << endl;
                break;
            }
        }
        if (!ok)
            cout << "NO" << endl;
    }
    return 0;
}

//  worst case - when it is in descending order
//  no. of exchanges
//  (n*(n-1))/2