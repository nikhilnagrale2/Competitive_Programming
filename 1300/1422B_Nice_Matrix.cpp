/*
  Problem Link    :   https://codeforces.com/problemset/problem/1422/B
  Contest Link    :   https://codeforces.com/contest/1422/problem/B
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
        int n, m;
        cin >> n >> m;
        vector<vector<long long>> a(n, vector<long long>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        long long ans = 0;
        for (int i = 0; i < (n + 1) / 2; i++)
        {
            for (int j = 0; j < (m + 1) / 2; j++)
            {
                long long median = 0;
                // pdn refers to palindrome numbers
                vector<long long> pdn;
                pdn.push_back(a[i][j]);
                if (j != m - j - 1)
                    pdn.push_back(a[i][m - 1 - j]);

                if (i != n - 1 - i)
                {
                    pdn.push_back(a[n - 1 - i][j]);
                    if (j != m - 1 - j)
                        pdn.push_back(a[n - 1 - i][m - 1 - j]);
                }
                sort(pdn.begin(), pdn.end());
                median = pdn[pdn.size() / 2];
                for (auto x : pdn)
                    ans += abs(x - median);
            }
        }
        cout << ans << endl;
    }
    return 0;
}