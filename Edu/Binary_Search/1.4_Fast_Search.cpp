/*
  Problem Link    :   https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
  Contest Link    :   https://codeforces.com/edu/course/2/lesson/6/1/practice
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int BinarySearchL(vector<int> &a, int x)
{
    int l = -1, r = a.size();
    while (r > l + 1)
    {
        int m = (l + r) / 2;
        if (a[m] <= x)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    return l;
}

int BinarySearchR(vector<int> &a, int x)
{
    int l = -1, r = a.size();
    while (r > l + 1)
    {
        int m = (l + r) / 2;
        if (a[m] < x)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    return r;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;

        cout << BinarySearchL(a, y) - BinarySearchR(a, x) + 1 << endl;
    }
    return 0;
}