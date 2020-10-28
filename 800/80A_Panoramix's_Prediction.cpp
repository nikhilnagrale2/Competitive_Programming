/*
  Problem Link    :   https://codeforces.com/problemset/problem/80/A
  Contest Link    :   https://codeforces.com/contest/80/problem/A
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

bool isprime(long long x)
{
    if (x == 1)
        return false;
        
    for (long long i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long n, m;
    cin >> n >> m;
    for (int i = n + 1; i <= m; i++)
    {
        if (isprime(i))
        {
            if (i == m)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}