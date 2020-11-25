/*
  Problem Link    :   https://codeforces.com/problemset/problem/1204/A
  Contest Link    :   https://codeforces.com/contest/1204/problem/A
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
	long long sum = 0;
	for (auto x : s)
		if (x)
			sum++;
	if (count(s.begin(), s.end(), '1') > 1)
		cout << (s.length() + 1) / 2 << endl;
	else if (!count(s.begin(), s.end(), '1'))
		cout << 0 << endl;
	else
		cout << s.length() / 2 << endl;

	return 0;
}