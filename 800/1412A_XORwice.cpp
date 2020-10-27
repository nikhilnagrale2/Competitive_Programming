//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include <bits/stdc++.h>
using namespace std;

int findX(int a, int b)
{
    int j = 0, x = 0;
    while (a || b)
    {
        if ((a & 1) && (b & 1))
        {
            x += (1 << j);
        }
        a >>= 1;
        b >>= 1;
        j += 1;
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = findX(a, b);
        int ans = (a ^ x) + (b ^ x);
        cout << ans << endl;
    }

    return 0;
}

//a^b
//a^(a&b)+b^(a&b)