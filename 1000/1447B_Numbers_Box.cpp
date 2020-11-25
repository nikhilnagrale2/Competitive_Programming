/*
  Problem Link    :   https://codeforces.com/problemset/problem/1447/B
  Contest Link    :   https://codeforces.com/contest/1447/problem/B
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
        int n, m, sum = 0, neg = 0, small = INT_MAX;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] < 0)
                    neg++;
                sum += abs(a[i][j]);
                if (small > abs(a[i][j]))
                    small = abs(a[i][j]);
            }
        }
        if (neg % 2 == 1)
            cout << sum - 2 * small << endl;
        else
            cout << sum << endl;
    }
    return 0;
}