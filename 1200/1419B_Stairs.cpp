/*
  Problem Link    :   https://codeforces.com/problemset/problem/1419/B
  Contest Link    :   https://codeforces.com/contest/1419/problem/B
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
        long long n, nicestairs = -1, cubes = 0, power = 1, stair = 1;
        cin >> n;

        while (n >= cubes)
        {
            stair = pow(2, power) - 1;
            cubes += stair * (stair + 1) / 2;
            nicestairs++;
            power++;
        }
        cout << nicestairs << endl;
    }
    return 0;
}

//another possible solution
/*
    while (T-- > 0)
    {
        ll x;
        cin >> x;
        int ans = 0;
        for (int i = 1; getS((1LL << i) - 1) <= x; i++)
        {
            ans++;
            x -= getS((1LL << i) - 1);
        }
        cout << ans << '\n';
    }
*/