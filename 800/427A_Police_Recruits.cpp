//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int ans = 0, police = 0;
    for (auto x : a)
    {
        if (x == -1 && police == 0)
        {
            if (!police)
                ans++;
            else
                police--;
        }
        else
            police += x;
    }
    cout << ans << endl;
    return 0;
}