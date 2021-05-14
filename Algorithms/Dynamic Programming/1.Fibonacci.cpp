#include <bits/stdc++.h>
using namespace std;
vector<int> dp(1000, -1);

//  Recursive Fibonacci
int fibRecursive(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

// Top Down DP Fibonacci
int fibTopDownDP(int n)
{
    if (n == 1 || n == 0)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibTopDownDP(n - 1) + fibTopDownDP(n - 2);
}

// Bottom Up DP Fibonacci
int fibBottomUpDP(int n)
{
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
}

// Bottom Up DP Fibonacci Memory optimized
int fibBottomUpDPMemory(int n)
{
    int dp1 = 0, dp2 = 1, ans;
    for (int i = 2; i <= n; i++)
    {
        ans = dp1 + dp2;
        dp1 = dp2;
        dp2 = ans;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << fibBottomUpDPMemory(n) << endl;
    return 0;
}