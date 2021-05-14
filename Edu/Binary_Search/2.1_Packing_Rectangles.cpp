/*
  Problem Link    :
  https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A
  Contest Link    :   https://codeforces.com/edu/course/2/lesson/6/2/practice
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :)
*/

#include <bits/stdc++.h>
using namespace std;

long long w, h, n;

bool good(long long m) { return (m / w) * (m / h) >= n; }

int main() {
    cin >> w >> h >> n;
    long long l = 0, r = 1;
    while (!good(r)) r *= 2;

    while (r > l + 1) {
        long long m = (l + r) / 2;
        if (good(m)) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << r << "\n";
    return 0;
}