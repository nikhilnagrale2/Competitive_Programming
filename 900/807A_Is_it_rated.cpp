/*
    Problem Link    :   https://codeforces.com/problemset/problem/807/A
    Contest Link    :   https://codeforces.com/contest/807/problem/A
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
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int before, after;
        cin >> before >> after;
        v.push_back({before, after});
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i].first != v[i].second)
        {
            cout << "rated" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (v[i].first > v[j].first)
            {
                cout << "unrated" << endl;
                return 0;
            }
        }
    }

    cout << "maybe" << endl;
    return 0;
}

// o(n) solution is also possible
// used following loop for 2nd condition unrated
// for(int i=0;i<n-1;i++)
// {
//     if (v[i].first < a[i + 1].first)
//     {
//         cout << "unrated" << endl;
//         return 0;
//     }
// }