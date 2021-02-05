/*
  Problem Link    :   https://codeforces.com/problemset/problem/988/C
  Contest Link    :   https://codeforces.com/contest/988/problem/C
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, pair<long long, long long>> a, pair<long long, pair<long long, long long>> b)
{
    return a.first < b.first;
}

int main()
{
    long long k;
    cin >> k;
    vector<vector<long long>> n(k, vector<long long>());
    vector<pair<long long, pair<long long, long long>>> ans;

    long long a, b;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            cin >> b;
            n[i].push_back(b);
            if (j)
                n[i][j] += n[i][j - 1];
        }
        for (int j = 0; j < a; j++)
        {
            long long sumdif = n[i][a - 1] - n[i][j];
            if (j != 0)
                sumdif += n[i][j - 1];
            ans.push_back({sumdif, {i, j}});
        }
    }

    sort(ans.begin(), ans.end(), &cmp);

    if (ans.size() == 0 || ans.size() == 1)
    {
        cout << "NO";
        return 0;
    }

    for (int i = 1; i < ans.size(); i++)
    {
        if (ans[i].first == ans[i - 1].first && ans[i].second.first != ans[i - 1].second.first)
        {
            cout << "YES" << endl;
            cout << ans[i].second.first + 1 << ' ' << ans[i].second.second + 1;
            cout << endl;
            cout << ans[i - 1].second.first + 1 << ' ' << ans[i - 1].second.second + 1;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

/*
* Easier Implementation
* 
    int k;
	cin >> k;
	vector<pair<int, pair<int, int>>> a;
	for (int i = 0; i < k; ++i) {
		int n;
		cin >> n;
		vector<int> x(n);
		for (int j = 0; j < n; ++j)
			cin >> x[j];
		int sum = accumulate(x.begin(), x.end(), 0);
		for (int j = 0; j < n; ++j)
			a.push_back(make_pair(sum - x[j], make_pair(i, j)));
	}
	
	stable_sort(a.begin(), a.end());
	for (int i = 0; i < int(a.size()) - 1; ++i) {
		if (a[i].first == a[i + 1].first && (a[i].second.first != a[i + 1].second.first)) {
			cout << "YES" << endl;
			cout << a[i + 1].second.first + 1 << " " << a[i + 1].second.second + 1 << endl;
			cout << a[i].second.first + 1 << " " << a[i].second.second + 1 << endl;
			return 0;
		}
	}
	
	cout << "NO\n";

*/