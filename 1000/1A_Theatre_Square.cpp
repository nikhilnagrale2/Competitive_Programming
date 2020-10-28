/*
  Problem Link    :   https://codeforces.com/problemset/problem/1/A
  Contest Link    :   https://codeforces.com/contest/1/problem/A
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
    long long n, m, a, x, y;
    cin >> n >> m >> a;
    x = n / a;
    y = m / a;

    if (n % a != 0)
        x++;
    if (m % a != 0)
        y++;

    cout << x * y << endl;
    return 0;
}

/*
    n = (n-1)/a + 1;
    m = (m-1)/a + 1;
    cout<<n*m<<endl;
*/

/*
    ans=((n+a-1) / a)*((m+a-1) / a)
*/