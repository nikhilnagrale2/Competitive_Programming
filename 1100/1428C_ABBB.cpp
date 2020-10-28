/*
    Problem Link    :   https://codeforces.com/problemset/problem/1428/C
    Contest Link    :   https://codeforces.com/contest/1428/problem/C
    Status          :   Accepted

    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

void improvedsolution()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int stk = 0;
        for (int i = 0; i < s.size(); i++)
            if (stk && s[i] == 'B')
                stk--;
            else
                stk++;

        cout << stk << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> stk;
        stk.push('a');
        stk.push(s[0]);
        for (int i = 1; i < s.length(); i++)
        {
            if (stk.top() == 'A' && s[i] == 'B' || stk.top() == 'B' && s[i] == 'B')
                stk.pop();
            else
                stk.push(s[i]);
        }
        cout << stk.size() - 1 << endl;
    }
    return 0;
}
