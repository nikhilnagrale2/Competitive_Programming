/*
  Problem Link    :   https://codeforces.com/problemset/problem/1461/A
  Contest Link    :   https://codeforces.com/contest/1461/problem/A
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
        long long n, k;
        cin >> n >> k;
        int x = n / 3;
        int y = n % 3;
        while (x--)
        {
            cout << "abc";
        }
        if (y == 1)
            cout << "a";
        if (y == 2)
            cout << "ab";

        cout << endl;
    }
    return 0;
}

//Another Implementation
/*
    int N, K;
    cin >> N >> K;
    string str;
 
    for (int i = 0; i < N; i++)
        str += char('a' + i % 3);
 
    cout << str << '\n';
*/