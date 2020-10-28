/*
    Problem Link    :   https://codeforces.com/problemset/problem/486/A
    Contest Link    :   https://codeforces.com/contest/486/problem/A
    Status          :   Accepted

    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

long long fun(long long n)
{
    long long ans = 0;

    if (n % 2 == 0)
    {
        n /= 2;
        ans += (n * (n + 1));
        ans -= n * n;
    }
    else
    {
        n /= 2;
        ans += (n * (n + 1));
        n++;
        ans -= n * n;
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}

//check this out
//-(n+1)/2 - even
//n/2 -- odd 