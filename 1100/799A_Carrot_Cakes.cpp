//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include <bits/stdc++.h>
using namespace std;

void solve1(int n, int t, int k, int d)
{
    int time = 0;
    while (time <= d)
    {
        n -= k;
        time += t;
    }
    if (n > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

void solve2(int n, int t, int k, int d)
{
    if (((d / t) + 1) * k >= n)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

void solve3(int n, int t, int k, int d)
{
}

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    solve1(n, t, k, d);
    return 0;
}