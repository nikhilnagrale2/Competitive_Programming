#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1000, -1);

int friendPairingRecursive(int n)
{
    if (n <= 2)
        return n;
    return friendPairingRecursive(n - 1) + (n - 1) * friendPairingRecursive(n - 2);
}

int friendPairingTopDownDP(int n)
{
    if (dp[n] != -1)
        return dp[n];

    if (n <= 2)
        return dp[n] = n;
    else
        return dp[n] = friendPairingTopDownDP(n - 1) + (n - 1) * friendPairingTopDownDP(n - 2);
}

int friendPairingBottomUpDP(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (i <= 2)
            dp[i] = i;
        dp[i] = dp[i - 1] + (i - 1) * dp[i - 2];
    }
    return dp[n];
}

int friendPairingSpace(int n)
{
    int dp1 = 1, dp2 = 2, dp3 = 0;
    if (n <= 2)
        return n;
    for (int i = 3; i <= n; i++)
    {
        dp3 = dp2 + (i - 1) * dp1;
        dp1 = dp2;
        dp2 = dp3;
    }
    return dp3;
}

int main()
{
    int n;
    cin >> n;
    cout << friendPairingRecursive(n) << endl;

    return 0;
}