/*
  Problem Link    :   https://codeforces.com/problemset/problem/1451/C
  Contest Link    :   https://codeforces.com/contest/1451/problem/C
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
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        map<int, int> aa;
        map<int, int> bb;
        bool yes = true;
        for (int i = 0; i < a.length(); i++)
        {
            aa[(int)a[i] - 97]++;
        }
        for (int i = 0; i < b.length(); i++)
        {
            bb[(int)b[i] - 97]++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (i != 25 && aa[i] > bb[i])
            {
                if ((aa[i] - bb[i]) % k != 0)
                    yes = false;
                else
                {
                    aa[i + 1] += aa[i] - bb[i];
                    aa[i] = bb[i];
                }
            }
            else if (aa[i] < bb[i])
                yes = false;
        }
        if (yes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}