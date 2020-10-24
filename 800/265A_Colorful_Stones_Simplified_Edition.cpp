//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int index = 1;
    for (auto x : t)
    {
        if (s[index - 1] == x)
            index++;
    }
    cout << index << endl;
    return 0;
}