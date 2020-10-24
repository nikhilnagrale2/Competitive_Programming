//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char pointer = 'a';
    int ans = 0;
    for (auto x : s)
    {
        ans += min(abs((int)x - (int)pointer), 26 - (abs((int)x - (int)pointer)));
        pointer = x;
    }
    cout << ans << endl;
    return 0;
}