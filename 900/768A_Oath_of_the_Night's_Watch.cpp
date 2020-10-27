//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxmin = 0, MAX = 0, MIN = 1000000007;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        MAX = max(MAX, a[i]), MIN = min(MIN, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == MAX)
            maxmin++;
        if (a[i] == MIN)
            maxmin++;
    }
    if (MAX == MIN)
        cout << 0 << endl;
    else
        cout << (n - maxmin) << endl;
    return 0;
}