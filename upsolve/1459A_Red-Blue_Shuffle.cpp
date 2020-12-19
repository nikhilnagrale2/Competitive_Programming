/*
  Problem Link    :   https://codeforces.com/problemset/problem/1459/A
  Contest Link    :   https://codeforces.com/contest/1459/problem/A
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
        cin >> a >> b;
        int red = 0, blue = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                red++;
            else if (b[i] > a[i])
                blue++;
        }

        if (red > blue)
            cout << "RED" << endl;
        else if (blue > red)
            cout << "BLUE" << endl;
        else
            cout << "EQUAL" << endl;
    }
    return 0;
}