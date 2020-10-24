//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, b, d;
    cin >> n >> b >> d;
    long long sum = 0, temp, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp <= b)
        {
            sum += temp;
            if (sum > d)
            {
                sum = 0;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}