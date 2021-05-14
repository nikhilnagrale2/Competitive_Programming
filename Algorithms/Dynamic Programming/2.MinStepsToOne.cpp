#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1000, -1);
dp[1] = 0;

int TopDownDPminStepsToOne(int n)
{
    if (dp[n] != -1)
        return dp[n];
    int dp1, dp2, dp3;
    dp1 = dp2 = dp3 = INT_MAX;
    if (n % 2 == 0)
        dp1 = TopDownDPminStepsToOne(n / 2);
    if (n % 3 == 0)
        dp2 = TopDownDPminStepsToOne(n / 3);
    dp3 = TopDownDPminStepsToOne(n - 1);
    return dp[n] = min({dp1, dp2, dp3}) + 1;
}

int BottomUpDPminStepsToOne(int n)
{
    dp[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        int dp1, dp2, dp3;
        dp1 = dp2 = dp3 = INT_MAX;
        if (i % 3 == 0)
            dp1 = dp[i / 3] + 1;
        if (i % 2 == 0)
            dp2 = dp[i / 2] + 1;
        dp3 = dp[i - 1] + 1;
        dp[i] = min({dp1, dp2, dp3});
    }
    return dp[n];
}

int main()
{
    int n, q;
    cout << "write no. of queries" << endl;
    cin >> q;
    while (q--)
    {
        cin >> n;
        cout << BottomUpDPminStepsToOne(n) << endl;
        // cout << TopDownDPminStepsToOne(n) << endl;
    }

    return 0;
}