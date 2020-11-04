/*
  Problem Link    :   https://codeforces.com/problemset/problem/1443/C
  Contest Link    :   https://codeforces.com/contest/1443/problem/C
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
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
        vector<int> a(n), b(n);
        vector<pair<int, int>> vp;

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        // You can also take input directly in vector of pairs.
        // I added it after because it will be easier to understand for beginners.
        for (int i = 0; i < n; i++)
        {
            vp.push_back({a[i], b[i]});
        }

        sort(vp.begin(), vp.end());

        int time = 0, i;
        for (i = n - 1; i >= 0; i--)
        {
            if (vp[i].first >= vp[i].second + time)
                time += vp[i].second;
            else
                break;
        }

        if (i < 0)
            cout << time << endl;
        else
            cout << max(vp[i].first, time) << endl;
    }
    return 0;
}