/*
  Problem Link    :   https://codeforces.com/problemset/problem/88/B
  Contest Link    :   https://codeforces.com/contest/88/problem/B
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
    int n, m, x;
    cin >> n >> m >> x;
    vector<string> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vector<int> a(40, -1);

    bool f1 = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (c[i][j] != 'S' && a[c[i][j] - 'a'] < 1)
            {
                a[c[i][j] - 'a'] = 0;
                for (int i1 = 0; i1 < n; i1++)
                {
                    for (int j1 = 0; j1 < m; j1++)
                    {
                        if (c[i1][j1] == 'S' && ((i - i1) * (i - i1) + (j - j1) * (j - j1)) <= (x * x))
                            a[c[i][j] - 'a'] = 1;
                    }
                }
            }
            else
            {
                f1 = true;
            }
        }
    }
    int q;
    cin >> q;
    string str;
    cin >> str;
    long long ans = 0;
    for (int i = 0; i < q; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' && f1 == 0)
        {
            cout << -1 << endl;
            return 0;
        }
        if (a[tolower(str[i]) - 'a'] == -1)
        {
            cout << -1 << endl;
            return 0;
        }
        if ((str[i] >= 'A') && str[i] <= 'Z' && a[str[i] - 'A'] == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}