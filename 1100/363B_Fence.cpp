/*
  Problem Link    :   https://codeforces.com/problemset/problem/363/B
  Contest Link    :   https://codeforces.com/contest/363/problem/B
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
    int n, k;
    cin >> n >> k;
    vector<int> h(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> h[i];

    for (int i = 1; i <= n; i++)
        h[i] += h[i - 1];
    int index = 0;
    long long sum = INT_MAX, cur_sum = 0;
    for (int i = 1; i <= n - k + 1; i++)
    {
        cur_sum = h[i + k - 1] - h[i - 1];
        if (cur_sum < sum)
        {
            index = i;
            sum = cur_sum;
        }
    }
    cout << index << endl;

    return 0;
}