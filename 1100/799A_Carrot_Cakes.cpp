//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    if (d + t < n / k * t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}