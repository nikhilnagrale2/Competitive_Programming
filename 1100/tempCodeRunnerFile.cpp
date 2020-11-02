/*
  Problem Link    :   https://codeforces.com/problemset/problem/218/A
  Contest Link    :   https://codeforces.com/contest/218/problem/A
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
	int n, k;
	cin >> n >> k;
	vector<int> r(2 * n + 2);
	for (int i = 1; i <= 2 * n + 1; i++)
	{
		cin >> r[i];
	}
	for (int i = 2; i <= 2 * n && k; i++)
	{
		if (r[i] > r[i - 1] && r[i] > r[i + 1])
		{
			r[i]--;
			k--;
			if (r[i] == r[i - 1] || r[i] == r[i + 1])
			{
				k++;
				r[i]++;
			}
		}
	}
	for (int i = 1; i <= 2 * n + 1; i++)
	{
		cout << r[i] << " ";
	}
	cout << endl;
	return 0;
}