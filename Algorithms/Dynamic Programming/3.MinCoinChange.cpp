#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1000, -1);

int TopDownDPminCoinChange(int n, vector<int> coins)
{
    if (dp[n] != -1)
        return dp[n];

    int ans = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
        if (n - coins[i] >= 0)
            ans = min(ans, TopDownDPminCoinChange(n - coins[i], coins) + 1);

    return dp[n] = ans;
}

int BottomUpDPminCoinChange(int n, vector<int> coins)
{
    for (int i = 1; i <= n; i++)
    {
        dp[i] = INT_MAX;
        for (int j = 0; j < coins.size(); j++)
            if (i - coins[j] >= 0)
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
    }
    return dp[n];
}

int main()
{
    dp[0] = 0;
    vector<int> coins = {1, 7, 10};

    int n;
    cin >> n;
    cout << BottomUpDPminCoinChange(n, coins) << endl;

    return 0;
}