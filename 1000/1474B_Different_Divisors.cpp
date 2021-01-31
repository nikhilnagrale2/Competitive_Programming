/*
  Problem Link    :   https://codeforces.com/problemset/problem/1474/B
  Contest Link    :   https://codeforces.com/contest/1474/problem/B
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int nextPrime(int N)
{
    if (N <= 1)
        return 2;

    int prime = N;
    bool found = false;
    while (!found)
    {
        prime++;

        if (isPrime(prime))
            found = true;
    }
    return prime;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long d;
        cin >> d;
        int a = nextPrime(1 + d - 1);
        int c = nextPrime(a + d - 1);
        cout << a * c << endl;
    }
    return 0;
}