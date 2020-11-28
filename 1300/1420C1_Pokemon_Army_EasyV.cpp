/*
  Problem Link    :   https://codeforces.com/problemset/problem/1420/C1
  Contest Link    :   https://codeforces.com/contest/1420/problem/C1
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
	int t;
	cin >> t;
	while (t--)
	{
		int n, q;
		cin >> n >> q;
		vector<int> a(n + 2);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int min_i = 1, max_i = 0;
		long long ans = 0;
		while (min_i <= n && max_i <= n - 1)
		{
			while (max_i <= n - 1 && a[max_i] < a[min_i])
			{
				max_i++;
				min_i++;
			}
			while (min_i <= n && a[min_i] > a[min_i + 1])
			{
				min_i++;
			}
			if (max_i <= n && a[min_i] < a[max_i])
			{
				ans += a[max_i] - a[min_i];
				max_i = min_i + 1;
				min_i += 2;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

/*
Dynamic Programming Solution
#include <iostream>
#include <vector>

using namespace std;

inline int64_t calc(const vector<int> &a) {
	int n = a.size();
	vector<int64_t> d1(n+1), d2(n+1);
	d1[0] = -static_cast<int64_t>(1e18);
	d2[0] = 0;
	for (int i = 0; i < n; ++i) {
		d1[i+1] = max(d1[i], d2[i] + a[i]);
		d2[i+1] = max(d2[i], d1[i] - a[i]);
	}
	return max(d1.back(), d2.back());
}

int main() {
	ios_base::sync_with_stdio(false);
	int t; cin >> t;
	while (t--) {
		int n, q; cin >> n >> q;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		cout << calc(a) << "\n";
		for (int i = 0; i < q; ++i) {
			int l, r; cin >> l >> r; --l; --r;
			swap(a[l], a[r]);
			cout << calc(a) << "\n";
		}
	}
	return 0;
}
*/

/*
Simplest Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, q;
		cin >> n >> q;
		vector<int> a(n + 2);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		a[n] = 0;
		long long ans = 0;
		for (int i = 1; i <= n; i++)
		{
			ans += max(0, a[i - 1] - a[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
*/