/*
  Problem Link    :   https://codeforces.com/problemset/problem/47/B
  Contest Link    :   https://codeforces.com/contest/47/problem/B
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;
pair<int, char> cnt[3];

int main()
{
	cnt[0] = {0, 'A'};
	cnt[1] = {0, 'B'};
	cnt[2] = {0, 'C'};
	for (int i = 0; i < 3; i++)
	{
		string s;
		cin >> s;

		if (s[1] == '>')
		{
			cnt[s[0] - 'A'].first++, cnt[s[2] - 'A'].first--;
		}
		else
		{
			cnt[s[0] - 'A'].first--, cnt[s[2] - 'A'].first++;
		}
	}
	sort(cnt, cnt + 3);
	if (cnt[0].first == cnt[1].first || cnt[1].first == cnt[2].first)
	{
		cout << "Impossible" << endl;
	}
	else
	{
		cout << cnt[0].second << cnt[1].second << cnt[2].second << endl;
	}
	return 0;
}