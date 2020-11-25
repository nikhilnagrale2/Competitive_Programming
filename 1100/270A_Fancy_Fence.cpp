/*
  Problem Link    :   https://codeforces.com/problemset/problem/270/A
  Contest Link    :   https://codeforces.com/contest/270/problem/A
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
		int a;
		cin >> a;
		if (360 % (180 - a) == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}