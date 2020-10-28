/*
    Problem Link    :   https://codeforces.com/problemset/problem/1417/A
    Contest Link    :   https://codeforces.com/contest/1417/problem/A
    Status          :   Accepted

    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Solve it on your own.
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
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        int mn = *min_element(a.begin(), a.end());
        int mini = min_element(a.begin(), a.end()) - a.begin();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i != mini)
            {
                count += (k - a[i]) / mn;
            }
        }
        cout << count << endl;
    }
    return 0;
}