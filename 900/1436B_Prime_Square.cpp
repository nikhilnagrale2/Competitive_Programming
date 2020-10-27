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
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == 1)
                s += "1 ";
            else
                s += "0 ";
        }
        for (int i = 0; i < n; i++)
        {
            cout << s << endl;
            string el;
            s.erase(s.end() - 1);
            el = s.back();
            el += " ";
            s.erase(s.end() - 1);
            s = el + s;
        }
    }
    return 0;
}