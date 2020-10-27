//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string direction;
    cin >> direction;
    string s, ans;
    cin >> s;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < s.length(); i++)
    {
        if (keyboard.find(s[i]) != string::npos && direction == "R")
        {
            ans += keyboard[keyboard.find(s[i]) - 1];
        }
        else
        {
            ans += keyboard[keyboard.find(s[i]) + 1];
        }
    }
    cout << ans << endl;
    return 0;
}