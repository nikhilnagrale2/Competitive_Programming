/*
  Problem Link    :   https://codeforces.com/problemset/problem/79/B
  Contest Link    :   https://codeforces.com/contest/79/problem/B
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
	int n, m, k, t;
	cin >> n >> m >> k >> t;
	vector<int> a(k), b(k);
	for (int i = 0; i < k; i++)
	{
		cin >> a[i] >> b[i];
	}

	while (t--)
	{
		int i, j;
		cin >> i >> j;
		bool waste = false;
		for (int x = 0; x < k; x++)
		{
			if (a[x] == i && b[x] == j)
				waste = true;
		}
		if (waste)
		{
			cout << "Waste" << endl;
			continue;
		}

		int idx = (i - 1) * m + (j - 1);
		for (int x = 0; x < k; x++)
		{
			if (a[x] < i || a[x] == i && b[x] < j)
				idx--;
		}

		if (idx % 3 == 0)
			cout << "Carrots" << endl;
		else if (idx % 3 == 1)
			cout << "Kiwis" << endl;
		else
			cout << "Grapes" << endl;
	}

	return 0;
}