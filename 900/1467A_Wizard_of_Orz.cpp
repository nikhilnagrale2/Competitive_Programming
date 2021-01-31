/*
  Problem Link    :   https://codeforces.com/problemset/problem/1467/A
  Contest Link    :   https://codeforces.com/contest/1467/problem/A
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
        if (n == 1)
            cout << "9";
        else if (n == 3)
            cout << "989";
        else if (n == 2)
            cout << "98";
        else
        {
            n -= 3;
            cout << "989";
            long long x = 0;
            for (int i = 0; i < n; i++)
            {
                cout << x;
                x++;
                x %= 10;
            }
        }
        cout << endl;
    }
    return 0;
}