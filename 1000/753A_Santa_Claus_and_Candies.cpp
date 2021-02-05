/*
  Problem Link    :   https://codeforces.com/problemset/problem/753/A
  Contest Link    :   https://codeforces.com/contest/753/problem/A
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
    vector<int> v;
    int remain = n;
    int ad = 1;
    while (1)
    {
        if (remain < ad)
            break;
        remain -= ad;
        v.push_back(ad++);
    }
    if (remain != 0)
    {
        v[v.size() - 1] += remain;
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}