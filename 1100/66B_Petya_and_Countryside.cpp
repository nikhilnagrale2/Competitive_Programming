/*
  Problem Link    :   https://codeforces.com/problemset/problem/66/B
  Contest Link    :   https://codeforces.com/contest/66/problem/B
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int temp = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j - 1] >= a[j])
                temp++;
            else
                break;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j + 1] >= a[j])
                temp++;
            else
                break;
        }
        ans = max(ans, temp);
    }
    cout << ans << endl;
    return 0;
}