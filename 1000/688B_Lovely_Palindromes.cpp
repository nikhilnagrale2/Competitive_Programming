/*
  Problem Link    :   https://codeforces.com/problemset/problem/688/B
  Contest Link    :   https://codeforces.com/contest/688/problem/B
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
	string s;
	cin >> s;
	string ans = s;
	reverse(s.begin(), s.end());
	ans += s;
	cout << ans << endl;
	return 0;
}