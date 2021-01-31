/*
  Problem Link    :   https://codeforces.com/problemset/problem/1466/A
  Contest Link    :   https://codeforces.com/contest/1466/problem/A
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
		long long n;
		cin >> n;
		vector<long long> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
 
		set<long long> x;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				x.insert(abs(a[i] - a[j]));
			}
		}
		cout << x.size() << endl;
	}
    return 0;
}