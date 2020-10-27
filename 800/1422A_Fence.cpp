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
        long long a, b, c;
        cin >> a >> b >> c;
        cout << max(a, max(b, c)) + min(a, min(b, c)) << endl;
    }
    return 0;
}
//max(a,b,c)
//a+b+c-1