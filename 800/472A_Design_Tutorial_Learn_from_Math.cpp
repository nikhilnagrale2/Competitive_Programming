/*
    Problem Link    :   https://codeforces.com/problemset/problem/472/A
    Contest Link    :   https://codeforces.com/contest/472/problem/A
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
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << n - 4 << " " << 4 << endl;
    else
        cout << n - 9 << " " << 9 << endl;
    return 0;
}
//sieve of eratosthenes
//or prove bachgold theorem
