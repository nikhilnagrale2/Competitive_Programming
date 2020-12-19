/*
  Problem Link    :   https://codeforces.com/problemset/problem/1435/A
  Contest Link    :   https://codeforces.com/contest/1435/problem/A
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n / 2; i++)
        {
            swap(a[i], a[n - 1 - i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                cout << -a[i] << " ";
            else
                cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Simpler way
for (int i = 2; i <= n; i += 2)
{
    cout << -a[i] << ' ' << a[i - 1] << ' ';
}
*/