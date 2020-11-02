/*
  Problem Link    :   https://codeforces.com/problemset/problem/382/A
  Contest Link    :   https://codeforces.com/contest/382/problem/A
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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    string left = a.substr(0, a.find("|"));
    a.erase(0, a.find("|") + 1);
    string right = a;
    if (abs((int)left.size() - (int)right.size()) > b.size() || (left.size() + right.size() + b.size()) % 2)
        cout << "Impossible" << endl;
    else
    {
        for (int i = 0; i < b.length(); i++)
        {
            if (left.size() <= right.size())
                left += b[i];
            else
                right += b[i];
        }
        cout << left + "|" + right << endl;
    }

    return 0;
}