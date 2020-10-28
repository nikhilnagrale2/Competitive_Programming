/*
    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    while (a)
    {
        b %= a;
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return b;
}

int Gcd(int a, int b)
{
    if (!a || !b)
        return a + b;
    return gcd(b, a % b);
}

int gCd(int a, int b)
{
    return !a ? b : gcd(b % a, a);
}

int main()
{
    __gcd(a, b);
    return 0;
}