#include <bits/stdc++.h>
using namespace std;

int coinChangeDP(vector<int> coins, int amount)
{
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1));
    for (int i = 1; i <= amount; i++)
        dp[0][i] = 0;
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= amount; j++)
            if (j >= coins[i - 1])
                dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
    return dp[n][amount];
}

int coinChange(vector<int> coins, int amount)
{
    int m = coins.size();
    vector<int> dp(amount + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < m; i++)
        for (int j = coins[i]; j <= amount; j++)
            dp[j] += dp[j - coins[i]];

    return dp[amount];
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> coins(m);
    for (int i = 0; i < m; i++)
        cin >> coins[i];
    cout << coinChange(coins, n) << endl;
    return 0;
}