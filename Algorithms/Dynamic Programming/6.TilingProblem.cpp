#include <bits/stdc++.h>
using namespace std;

vector<int> dp(100, -1);

int TilingRecursive(int n)
{
    if (n == 0)
        return 0;
    if (n <= 3)
        return 1;
    if (n == 4)
        return 2;
    return TilingRecursive(n - 1) + TilingRecursive(n - 4);
}

int TilingTopDownDP(int n)
{
    if (n == 0)
        return dp[n] = 0;
    if (n <= 3)
        return dp[n] = 1;
    if (n == 4)
        return dp[n] = 2;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = TilingTopDownDP(n - 1) + TilingTopDownDP(n - 4);
}

int TilingBottomUpDP(int n)
{
    dp[0] = 0;
    dp[1] = dp[2] = dp[3] = 1;
    dp[4] = 2;
    for (int i = 5; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 4];
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << TilingBottomUpDP(n) << endl;
    return 0;
}