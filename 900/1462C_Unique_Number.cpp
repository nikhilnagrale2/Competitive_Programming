/*
  Problem Link    :   https://codeforces.com/problemset/problem/1462/C
  Contest Link    :   https://codeforces.com/contest/1462/problem/C
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
        string ans;
        for (int i = 9; i >= 1; i--)
        {
            string temp = ans;
            int sum = 0;
            ans += to_string(i);
            for (int j = 0; j < ans.length(); j++)
            {
                sum += (int)(ans[j] - '0');
            }
            if (sum > n)
            {
                ans = temp;
                continue;
            }
            else if (sum == n)
            {
                break;
            }
        }
        int anssum = 0;
        for (int j = 0; j < ans.length(); j++)
        {
            anssum += (int)(ans[j] - '0');
        }

        if (anssum != n)
            cout << "-1" << endl;
        else
        {
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
        }
    }
    return 0;
}

//  Better Implementation
/*
    int x;
    cin >> x;
    string res;
    int limit = 9;
 
    if (x > 45)
        cout << -1 << '\n';
    else
    {
        while (x)
        {
            res.push_back(min(limit, x) + '0');
            x = max(0ll, x - limit);
            limit--;
        }

        reverse(res.begin(), res.end());
        cout << res << '\n';
    }
*/