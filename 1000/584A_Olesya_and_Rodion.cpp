/*
  Problem Link    :   https://codeforces.com/problemset/problem/584/A
  Contest Link    :   https://codeforces.com/contest/584/problem/A
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	if (n == 1 && t == 10)
	{
		cout << "-1" << endl;
		return 0;
	}

	if (t == 10 && n != 1)
	{
		for (int i = 0; i < n - 1; i++)
		{
			cout << 1;
		}
		cout << 0 << endl;
		return 0;
	}

	for (int i = 0; i < n; i++)
		cout << t;
	cout << endl;

	return 0;
}