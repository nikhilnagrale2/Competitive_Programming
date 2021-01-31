/*
  Problem Link    :   https://codeforces.com/problemset/problem/1473/C
  Contest Link    :   https://codeforces.com/contest/1473/problem/C
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
        long long n, k;
        cin >> n >> k;
        int i;
        int x = 1;
        int how = 0;
        while (x != (k - (n - k)) && how != k)
        {
            how++;
            cout << x++ << " ";
        }
        x = k;
        while (x >= 1 && how != k)
        {
            how++;
            cout << x-- << " ";
        }
        cout << endl;
    }
    return 0;
}