/*
  Problem Link    :   https://codeforces.com/problemset/problem/127/A
  Contest Link    :   https://codeforces.com/contest/127/problem/A
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
	double n, k;
	cin >> n >> k;
	vector<pair<double, double>> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].first >> a[i].second;
	}
	double distance = 0.0;
	for (int i = 0; i < n - 1; i++)
	{
		distance += sqrt(pow((a[i].first - a[i + 1].first), 2) + pow((a[i].second - a[i + 1].second), 2));
	}
	printf("%.9f", (double)k * distance / 50);
	return 0;
}