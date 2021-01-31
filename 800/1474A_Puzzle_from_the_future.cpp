/*
  Problem Link    :   https://codeforces.com/problemset/problem/1474/A
  Contest Link    :   https://codeforces.com/contest/1474/problem/A
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
        string a, b;
        cin >> b;
        a.push_back('1');
        for (int i = 1; i < n; i++)
        {
            if (b[i] == '0')
            {
                if (b[i - 1] - '0' + a[i - 1] - '0' == 2)
                {
                    a.push_back('1');
                }
                else if (b[i - 1] - '0' + a[i - 1] - '0' == 1)
                {
                    a.push_back('0');
                }
                else if (b[i - 1] - '0' + a[i - 1] - '0' == 0)
                {
                    a.push_back('1');
                }
            }
            else if (b[i] == '1')
            {
                if (b[i - 1] - '0' + a[i - 1] - '0' == 2)
                {
                    a.push_back('0');
                }
                else if (b[i - 1] - '0' + a[i - 1] - '0' == 1)
                {
                    a.push_back('1');
                }
                else if (b[i - 1] - '0' + a[i - 1] - '0' == 0)
                {
                    a.push_back('1');
                }
            }
        }
        cout << a << endl;
    }
    return 0;
}