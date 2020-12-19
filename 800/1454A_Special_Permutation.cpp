/*
  Problem Link    :   https://codeforces.com/problemset/problem/1454/A
  Contest Link    :   https://codeforces.com/contest/1454/problem/A
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
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = n; i >= 1; i--)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            for (int i = n; i >= 1; i--)
            {
                if (i != floor(n / 2) + 1)
                    cout << i << " ";
            }
            cout << floor(n / 2) + 1 << endl;
        }
    }
    return 0;
}