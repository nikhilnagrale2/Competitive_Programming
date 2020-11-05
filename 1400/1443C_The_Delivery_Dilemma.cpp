/*
  Problem Link    :   https://codeforces.com/problemset/problem/1443/C
  Contest Link    :   https://codeforces.com/contest/1443/problem/C
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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        vector<pair<int, int>> vp;

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        //  You can also take input directly in vector of pairs.
        //  I added it after because it will be easier to understand for beginners.
        for (int i = 0; i < n; i++)
        {
            vp.push_back({a[i], b[i]});
        }

        sort(vp.begin(), vp.end());

        int time = 0, i;
        for (i = n - 1; i >= 0; i--)
        {
            if (vp[i].first >= vp[i].second + time)
                time += vp[i].second;
            else
                break;
        }

        if (i < 0)
            cout << time << endl;
        else
            cout << max(vp[i].first, time) << endl;
    }
    return 0;
}

/*
Binary Search Implementation
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    long long l = 0, r = 1e9 + 10;
    while (r - l > 1)
    {
        long long mid = (r + l) / 2;
        long long lol = 0;
        for (int i = 0; i < n; i++)
        {
            if (mid < a[i])
                lol += b[i];
        }
        if (lol > mid)
            l = mid;
        else
            r = mid;
    }

    cout << r << '\n';
}

*/

/*
Binary Search Implementation
bool OK(long long num) 
{
	long long sum = 0;
 
	for (int i = 1; i <= n; i++) {
		if (a[i] > num)
			sum += b[i];
	}
 
	if (sum <= num)
		return true;
	return false;
}

int main(void)
{
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%I64d", a + i);
        long long sum = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%I64d", b + i);
            sum += b[i];
        }
        long long s = 1, e = sum, r = sum;

        while (s <= e)
        {
            long long mid = (s + e) / 2;
            if (OK(mid))
            {
                e = mid - 1;
                r = std::min(r, mid);
            }
            else
                s = mid + 1;
        }
        printf("%I64d\n", r);
    }
}
*/

/*
binary search implmentation

#include <iostream>
#define int long long
using namespace std;
int t, n, a[200010], b[200010];
signed main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int l = 1, r = 0, ans;
        for (int i = 1; i <= n; ++i)
            cin >> a[i], r = max(r, a[i]);
        for (int i = 1; i <= n; ++i)
            cin >> b[i];
        while (l <= r)
        {
            int mid = (l + r) / 2;
            int tot = 0;
            for (int i = 1; i <= n; ++i)
                if (a[i] > mid)
                    tot += b[i];
            if (tot > mid)
            {
                l = mid + 1;
            }
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
*/
