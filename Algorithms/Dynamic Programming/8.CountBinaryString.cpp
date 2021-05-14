#include <bits/stdc++.h>
using namespace std;

int dp[2][1000] = {0};

int CountBinaryStringRecursive(int n, int last_digit)
{
    if (n == 1)
        return 1;
    if (last_digit == 0)
        return CountBinaryStringRecursive(n - 1, 1) + CountBinaryStringRecursive(n - 1, 0);
    return CountBinaryStringRecursive(n - 1, 0);
}

int CountBinaryStringRecursive(int n)
{
    return CountBinaryStringRecursive(n, 1) + CountBinaryStringRecursive(n, 0);
}

int CountBinaryStringTopDownDP(int n, int last_digit)
{
    if (n == 1)
        return 1;
    if (dp[last_digit][n - 1] != 0)
        return dp[last_digit][n - 1];
    if (last_digit == 0)
        return dp[0][n - 1] = CountBinaryStringTopDownDP(n - 1, 1) + CountBinaryStringTopDownDP(n - 1, 0);
    return dp[1][n - 1] = CountBinaryStringTopDownDP(n - 1, 0);
}

int CountBinaryStringTopDownDP(int n)
{
    CountBinaryStringTopDownDP(n, 0);
    CountBinaryStringTopDownDP(n, 1);
    return dp[0][n - 1] + dp[1][n - 1];
}

int CountBinaryStringBottomUpDP(int n)
{
    int dp[2][101];
    dp[0][0] = dp[1][0] = 1;
    for (int i = 1; i < n; i++)
    {
        dp[0][i] = dp[0][i - 1] + dp[1][i - 1];
        dp[1][i] = dp[0][i - 1];
    }
    return dp[0][n - 1] + dp[1][n - 1];
}

int main()
{
    int n;
    cin >> n;
    cout << CountBinaryStringRecursive(n) << endl;
    //  Fibonacci Series
    return 0;
}