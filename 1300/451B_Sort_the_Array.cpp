/*
  Problem Link    :   https://codeforces.com/problemset/problem/451/B
  Contest Link    :   https://codeforces.com/contest/451/problem/B
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
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	vector<int> b(a);
	sort(b.begin(), b.end());

	map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		mp[b[i]] = i;
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = mp[a[i]];
	}
	int L = -1, R = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != i)
		{
			L = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] != i)
		{
			R = i;
			break;
		}
	}
	if (L == -1 || R == -1)
	{
		cout << "yes" << endl;
		cout << "1 1" << endl;
	}
	else
	{
		reverse(a.begin() + L, a.begin() + R + 1);
		int ok = true;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != i)
			{
				ok = false;
			}
		}

		if (ok)
		{
			cout << "yes" << endl;
			cout << L + 1 << " " << R + 1 << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}