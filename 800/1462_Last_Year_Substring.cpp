/*
  Problem Link    :   https://codeforces.com/problemset/problem/1462/B
  Contest Link    :   https://codeforces.com/contest/1462/problem/B
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        string twenty = "2020";
        bool yes = false;
        if (twenty == s)
            yes = true;
        if (s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
            yes = true;
        if (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
            yes = true;
        if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
            yes = true;
        if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
            yes = true;
        if (s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
            yes = true;
        if (yes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

//Shorter Implementation
/*
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        bool flag = false;
        string res;
        vector<pair<int, int>> blah = {{0, 4}, {1, 3}, {2, 2}, {3, 1}, {4, 0}};
        for (auto xy : blah)
        {
            res = build_string(s, n, xy.first, xy.second);
            if (res == "2020")
            {
                flag = true;
                break;
            }
        }
 
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
*/
