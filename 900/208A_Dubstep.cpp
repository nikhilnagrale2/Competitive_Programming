/*
  Problem Link    :   https://codeforces.com/problemset/problem/208/A
  Contest Link    :   https://codeforces.com/contest/208/problem/A
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
    string a;
    cin >> a;
    while (a.find("WUB") != -1)
    {
        int t = a.find("WUB");
        if (t == 0 || t == a.size() - 3 || a[t - 1] == ' ')
            a.erase(t, 3);
        else
            a.replace(t, 3, " ");
    }
    cout << a << endl;
    return 0;
}