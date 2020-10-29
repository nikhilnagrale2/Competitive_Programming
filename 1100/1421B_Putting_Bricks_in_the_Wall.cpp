/*
  Problem Link    :   https://codeforces.com/problemset/problem/1421/B
  Contest Link    :   https://codeforces.com/contest/1421/problem/B
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
        int n, ans = 0;
        cin >> n;
        vector<string> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> v;
        if (b[0][1] == '0' && b[1][0] == '0')
        {
            if (b[n - 1][n - 2] == '0' && b[n - 2][n - 1] == '0')
            {
                v.push_back({1, 2});
                v.push_back({2, 1});
                ans += 2;
            }
            else if (b[n - 1][n - 2] == '0' && b[n - 2][n - 1] == '1')
            {
                v.push_back({n, n - 1});
                ans++;
            }
            else if (b[n - 1][n - 2] == '1' && b[n - 2][n - 1] == '0')
            {
                v.push_back({n - 1, n});
                ans++;
            }
        }
        else if (b[0][1] == '1' && b[1][0] == '1')
        {
            if (b[n - 1][n - 2] == '0' && b[n - 2][n - 1] == '1')
            {
                v.push_back({n - 1, n});
                ans++;
            }
            else if (b[n - 1][n - 2] == '1' && b[n - 2][n - 1] == '0')
            {
                ans++;
                v.push_back({n, n - 1});
            }
            else if (b[n - 1][n - 2] == '1' && b[n - 2][n - 1] == '1')
            {
                v.push_back({1, 2});
                v.push_back({2, 1});
                ans += 2;
            }
        }
        else if (b[0][1] == '0' && b[1][0] == '1')
        {
            if (b[n - 1][n - 2] == '0' && b[n - 2][n - 1] == '0')
            {
                v.push_back({1, 2});
                ans++;
            }
            else if (b[n - 1][n - 2] == '0' && b[n - 2][n - 1] == '1')
            {
                v.push_back({1, 2});
                v.push_back({n - 1, n});
                ans += 2;
            }
            else if (b[n - 1][n - 2] == '1' && b[n - 2][n - 1] == '0')
            {
                v.push_back({1, 2});
                v.push_back({n, n - 1});
                ans += 2;
            }
            else if (b[n - 1][n - 2] == '1' && b[n - 2][n - 1] == '1')
            {
                ans++;
                v.push_back({2, 1});
            }
        }
        else if (b[0][1] == '1' && b[1][0] == '0')
        {
            if (b[n - 1][n - 2] == '0' && b[n - 2][n - 1] == '0')
            {
                ans++;
                v.push_back({2, 1});
            }
            else if (b[n - 1][n - 2] == '0' && b[n - 2][n - 1] == '1')
            {
                v.push_back({1, 2});
                v.push_back({n, n - 1});
                ans += 2;
            }
            else if (b[n - 1][n - 2] == '1' && b[n - 2][n - 1] == '0')
            {
                v.push_back({1, 2});
                v.push_back({n - 1, n});
                ans += 2;
            }
            else if (b[n - 1][n - 2] == '1' && b[n - 2][n - 1] == '1')
            {
                v.push_back({1, 2});
                ans++;
            }
        }
        cout << ans << endl;
        for (auto x : v)
            cout << x.first << " " << x.second << endl;
    }
    return 0;
}

//optimized smaller solution
/*
    vector<pair<int, int>> res;
    if (a[1][2] == a[2][1])
    {
        if (a[n - 1][n] == a[1][2])
            res.emplace_back(n - 1, n);
        if (a[n][n - 1] == a[1][2])
            res.emplace_back(n, n - 1);
    }
    else if (a[n - 1][n] == a[n][n - 1])
    {
        if (a[n - 1][n] == a[1][2])
            res.emplace_back(1, 2);
        if (a[n - 1][n] == a[2][1])
            res.emplace_back(2, 1);
    }
    else
    {
        res.emplace_back(2, 1);
        if (a[n - 1][n] == a[1][2])
            res.emplace_back(n - 1, n);
        if (a[n][n - 1] == a[1][2])
            res.emplace_back(n, n - 1);
    }

    cout << res.size() << '\n';
    for (auto z : res)
    {
        cout << z.first << ' ' << z.second << '\n';
    }
*/