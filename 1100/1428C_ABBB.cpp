//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

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
