/*
  Problem Link    :   https://codeforces.com/problemset/problem/1437/B
  Contest Link    :   https://codeforces.com/contest/1437/problem/B
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
        string s;
        cin >> s;
        if (n == 2)
            cout << 0 << endl;
        else
        {
            int ans1 = 0;
            int ans2 = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    if (s[i] == '1')
                        ans1++;
                    else
                        ans2++;
                }
            }
            cout << max(ans1, ans2) << endl;
        }
    }
    return 0;
}

/*
    Another solution

    cout<<((ans1+ans2)+1)/2<<endl;
*/
