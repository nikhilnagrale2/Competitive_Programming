/*
  Problem Link    :   https://codeforces.com/problemset/problem/43/A
  Contest Link    :   https://codeforces.com/contest/43/problem/A
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        m[a]++;
    }
    string s = "qqqqqqqqqq";
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        if (it->second > m[s])
            s = it->first;
    }
    cout << s << endl;

    return 0;
}