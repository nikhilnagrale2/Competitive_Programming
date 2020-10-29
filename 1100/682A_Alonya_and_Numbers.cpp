/*
  Problem Link    :   https://codeforces.com/problemset/problem/682/A
  Contest Link    :   https://codeforces.com/contest/682/problem/A
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
    long long n, m, ans = 0;
    cin >> n >> m;
    for (long long i = 1; i <= n; i++)
        ans += (i + m) / 5 - i / 5;
    cout << ans << endl;
    return 0;
}

//bruteforce
/*
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if ((i + j) % 5 == 0)
                ans++;
        }
    }
*/