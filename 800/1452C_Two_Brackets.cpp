/*
  Problem Link    :   https://codeforces.com/problemset/problem/1452/C
  Contest Link    :   https://codeforces.com/contest/1452/problem/C
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
        string s;
        cin >> s;
        stack<char> a, b;
        a.push('0');
        b.push('0');
        int count = 0;
        for (auto x : s)
        {
            if (x == '[' || x == ']')
            {
                if (a.top() == '[' && x == ']')
                {
                    count++;
                    a.pop();
                }
                else
                {
                    a.push(x);
                }
            }
            else
            {
                if (b.top() == '(' && x == ')')
                {
                    count++;
                    b.pop();
                }
                else
                {
                    b.push(x);
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}