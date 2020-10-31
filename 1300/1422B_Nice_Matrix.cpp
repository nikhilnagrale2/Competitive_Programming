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
                set<long long> pdn;
                pdn.insert(a[i][j]);
                pdn.insert(a[i][m - j - 1]);
                pdn.insert(a[n - 1 - i][j]);
                pdn.insert(a[n - 1 - i][m - j - 1]);

                if (pdn.size() == 1)
                    continue;

                int q = 0;
                for (auto k : pdn)
                {
                    if (q == 1)
                        median = k;
                    q++;
                }

                for (auto k : pdn)
                    ans += abs(median - k);
            }
        }
        cout << ans << endl;
    }
    return 0;
}