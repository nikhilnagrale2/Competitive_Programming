/*
  Problem Link    :   https://codeforces.com/problemset/problem/1419/D1
  Contest Link    :   https://codeforces.com/contest/1419/problem/D1
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
    vector<int> a(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int j = 0;
    for (int i = 1; i < n; i += 2)
    {
        ans[i] = a[j];
        j++;
    }
    for (int i = 0; i < n; i += 2)
    {
        ans[i] = a[j];
        j++;
    }

    cout << (n - 1) / 2 << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

// can be solved by binary search on answer method
/*

*/