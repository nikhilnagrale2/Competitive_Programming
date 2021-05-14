#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

void solve()
{
    long long n;
    cin >> n;
    vector<pair<long long, long long>> shoes(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> shoes[i].first >> shoes[i].second;

    vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));

    if (shoes[1].first % 2 == 0)
        dp[1][0] += 1;
    else
        dp[1][1] += 1;

    if (shoes[1].second % 2 == 0)
        dp[1][0] += 1;
    else
        dp[1][1] += 1;

    for (int i = 2; i <= n; i++)
    {
        if (shoes[i].first % 2 == 0) // if the current element is even
        {
            //we need to count the number of ways of odd sum in previous i
            // a = dp[i-1][0];
            dp[i][0] = (dp[i][0] % MOD + dp[i - 1][0] % MOD) % MOD;
            dp[i][1] = (dp[i][1] % MOD + dp[i - 1][1] % MOD) % MOD;
        }
        else // if current element is odd
        {
            // we need number of ways of even sum upto previous i
            // b = dp[i-1][0];
            dp[i][1] = (dp[i][1] % MOD + dp[i - 1][0] % MOD) % MOD;
            dp[i][0] = (dp[i][0] % MOD + dp[i - 1][1] % MOD) % MOD;
        }

        if (shoes[i].second % 2 == 0) // if the current element is odd
        {
            //we need to count the number of ways of even sum in previous i
            dp[i][0] = (dp[i][0] % MOD + dp[i - 1][0] % MOD) % MOD;
            dp[i][1] = (dp[i][1] % MOD + dp[i - 1][1] % MOD) % MOD;
        }
        else // if current element is odd
        {
            // we need number of ways of even sum upto previous i
            // b = dp[i-1][0];
            dp[i][1] = (dp[i][1] % MOD + dp[i - 1][0] % MOD) % MOD;
            dp[i][0] = (dp[i][0] % MOD + dp[i - 1][1] % MOD) % MOD;
        }
    }

    cout << (dp[n][1]) % MOD << endl;
}

long long power(long long n, long long x)
{
    long long po = 1;
    while (x != 0)
    {
        if (x % 2 == 0)
        {
            n = (n % MOD) * (n % MOD);
            n = n % MOD;
            x = x / 2;
        }
        po = ((po % MOD) * (n % MOD)) % MOD;
        po = po % MOD;
        x--;
    }
    return po % MOD;
}

void solve2()
{
    int n;
    cin >> n;
    int l[n];
    int r[n];
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }
    int oo = 0;
    int eo = 0;
    int ee = 0;
    for (int i = 0; i < n; i++)
    {
        if (l[i] % 2 == 0 && r[i] % 2 == 0)
            ee++;
        else if (l[i] % 2 == 1 && r[i] % 2 == 1)
            oo++;
        else
            eo++;
    }
    long long ans = 0;
    if (eo == 0 && oo % 2 == 1)
    {
        ans = power(2, n);
    }
    else if (eo != 0)
    {
        ans = power(2, n - 1);
    }
    cout << ans << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }

    return 0;
}