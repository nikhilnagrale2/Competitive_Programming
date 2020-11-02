/*
  Problem Link    :   https://codeforces.com/problemset/problem/143/A
  Contest Link    :   https://codeforces.com/contest/143/problem/A
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
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    set<int> s;

    for (int a = 1; a < 10; a++)
        for (int b = 1; b < 10; b++)
            for (int c = 1; c < 10; c++)
                for (int d = 1; d < 10; d++)
                {
                    s.clear();
                    s.insert(a);
                    s.insert(b);
                    s.insert(c);
                    s.insert(d);
                    if (s.size() != 4)
                        continue;
                    if (a + b != r1)
                        continue;
                    if (c + d != r2)
                        continue;
                    if (a + c != c1)
                        continue;
                    if (b + d != c2)
                        continue;
                    if (a + d != d1)
                        continue;
                    if (c + b != d2)
                        continue;
                    cout << a << " " << b << endl;
                    cout << c << " " << d << endl;
                    return 0;
                }
    cout << -1 << endl;
    return 0;
}