//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, i, distress = 0;
    cin >> n >> x;
    char c;
    while (n--)
    {
        cin >> c >> i;
        if (c == '+')
        {
            x += i;
        }
        else
        {
            if (i <= x)
            {
                x -= i;
            }
            else
            {
                distress++;
            }
        }
    }
    cout << x << " " << distress << endl;
    return 0;
}