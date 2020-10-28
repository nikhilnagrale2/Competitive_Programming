/*
  Problem Link    :   https://codeforces.com/problemset/problem/404/A
  Contest Link    :   https://codeforces.com/contest/404/problem/A
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
    string s;
    set<char> count;
    set<char> allcount;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            if (i == j || (i == n - j - 1))
                count.insert(s[j]);
            allcount.insert(s[j]);
        }
    }
    if (allcount.size() != 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (count.size() != 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}