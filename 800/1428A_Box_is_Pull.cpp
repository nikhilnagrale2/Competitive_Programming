//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a == x || b == y)
            cout << abs(a - x) + abs(b - y) << endl;
        else
            cout << 2 + abs(x - a) + abs(y - b) << endl;
    }
    return 0;
}