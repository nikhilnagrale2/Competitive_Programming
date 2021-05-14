#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
vector<int> dp(100, -1);

int Tiling2BottomUpDP(int n, int m)
{
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1];
        dp[i] += (i - m >= 0) ? dp[i - m] : 0;
        dp[i] %= mod;
    }
    return dp[n];
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << Tiling2BottomUpDP(n, m) << endl;
    return 0;
}