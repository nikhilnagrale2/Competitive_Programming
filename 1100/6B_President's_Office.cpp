/*
  Problem Link    :   https://codeforces.com/problemset/problem/6/B
  Contest Link    :   https://codeforces.com/contest/6/problem/B
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
	int n, m;
	char c;
	cin >> n >> m >> c;
	vector<string> desk(n);
	set<char> adj;
	for (int i = 0; i < n; i++)
		cin >> desk[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (desk[i][j] == c)
			{
				if (i != 0 && desk[i - 1][j] != c)
					adj.insert(desk[i - 1][j]);
				if (i != n - 1 && desk[i + 1][j] != c)
					adj.insert(desk[i + 1][j]);
				if (j != 0 && desk[i][j - 1] != c)
					adj.insert(desk[i][j - 1]);
				if (j != m - 1 && desk[i][j + 1] != c)
					adj.insert(desk[i][j + 1]);
			}
		}
	}
	int ans = 0;
	if (adj.find('.') != adj.end())
		ans--;
	cout << adj.size() + ans << endl;

	return 0;
}