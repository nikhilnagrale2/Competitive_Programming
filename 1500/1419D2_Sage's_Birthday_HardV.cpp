/*
  Problem Link    :   https://codeforces.com/problemset/problem/1419/D2
  Contest Link    :   https://codeforces.com/contest/1419/problem/D2
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
    vector<int> a(n + 1), f_ans(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0;
    sort(a.begin(), a.end());
    int i = 1;
    for (int j = 2; j <= n; j += 2)
        f_ans[j] = a[i++];

    for (int j = 1; j <= n; j++)
        if (f_ans[j] == 0)
            f_ans[j] = a[i++];

    for (int j = 2; j < n; j += 2)
        if (f_ans[j] < f_ans[j + 1] && f_ans[j] < f_ans[j - 1])
            ans++;

    cout << ans << endl;
    for (int j = 1; j <= n; j++)
        cout << f_ans[j] << " ";
    cout << endl;

    return 0;
}