/*
  Problem Link    :   https://codeforces.com/problemset/problem/1436/C
  Contest Link    :   https://codeforces.com/contest/1436/problem/C
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
const long long INF = 1e18;
const int32_t M = 1e9 + 7;

const int N = 5000;

#define NCR
#define PRIME M
int pw(int a, int p = M - 2, int MOD = M)
{
	int result = 1;
	while (p > 0)
	{
		if (p & 1)
			result = a * result % MOD;
		a = a * a % MOD;
		p >>= 1;
	}
	return result;
}
int fact[N], invfact[N];
void init()
{
	int p = PRIME;
	fact[0] = 1;
	int i;
	for (i = 1; i < N; i++)
	{
		fact[i] = i * fact[i - 1] % p;
	}
	i--;
	invfact[i] = pw(fact[i], p - 2, p);
	for (i--; i >= 0; i--)
	{
		invfact[i] = invfact[i + 1] * (i + 1) % p;
	}
}
int ncr(int n, int r)
{
	if (r > n || n < 0 || r < 0)
		return 0;
	return fact[n] * invfact[r] % PRIME * invfact[n - r] % PRIME;
}

signed main()
{
	init();

	int n, x, pos;
	cin >> n >> x >> pos;
	int left = 0, right = n, cnts = 0, cntb = 0;
	while (left < right)
	{
		int middle = (left + right) / 2;
		if (middle < pos)
			cnts++;
		if (middle > pos)
			cntb++;
		if (middle <= pos)
			left = middle + 1;
		else
			right = middle;
	}

	assert(left - 1 == pos);
	cout << ncr(x - 1, cnts) * ncr(n - x, cntb) % M * fact[(n - cnts - cntb - 1)] % M * fact[cnts] % M * fact[cntb] % M;
	return 0;
}