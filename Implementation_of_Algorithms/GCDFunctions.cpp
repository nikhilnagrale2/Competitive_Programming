/*
    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

// USING BITS MANIPULATION
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

// USING MODULO
int Gcd(int a, int b)
{
    if (!a || !b)
        return a + b;
    return gcd(b, a % b);
}

// SAME AS ABOVE
int gCd(int a, int b)
{
    return !a ? b : gcd(b % a, a);
}

int main()
{
    //STL FUNCTION FOR GCD
    __gcd(a, b);
    return 0;
}