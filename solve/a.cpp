/*
  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Leetcode        :   https://leetcode.com/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<long long> pref(n + 1);
        pref[0] = 0;
        pref[1] = a[0];
        for (int i = 1; i < n; i++)
        {
            pref[i + 1] = a[i] + pref[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1)
            {
                // cout << endl;
                // cout << pref[i] << endl;

                cout << (pref[i]) / (i) << " ";
                a[i] = pref[i] / i;
                for (int i = 1; i < n; i++)
                {
                    pref[i + 1] = a[i] + pref[i];
                }
            }
            else
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}