/*
    Problem Link    :   https://codeforces.com/problemset/problem/9/A
    Contest Link    :   https://codeforces.com/contest/9/problem/A
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
    int y, w;
    cin >> y >> w;
    string a[6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << a[max(y, w) - 1] << endl;
    return 0;
}

/*
gcd based solution is also possible 
int gcd(int a, int b) { return !a ? b : gcd(b % a, a); }
void solve()
{
    int y, w;
    cin >> y >> w;
    int r1 = 7 - max(y, w);
    int r2 = 6;
    int d = gcd(r1, r2);
    cout << r1 / d << "/" << r2 / d << endl;
}
*/