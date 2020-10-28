/*
    Problem Link    :   https://codeforces.com/problemset/problem/41/A
    Contest Link    :   https://codeforces.com/contest/41/problem/A
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
        int n;
        cin >> n;
        vector<int> ans;
        int power = 1;
        while (n > 0)
        {
            if (n % 10 > 0)
                ans.push_back((n % 10) * power);
            n /= 10;
            power *= 10;
        }
        cout << ans.size() << endl;
        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}