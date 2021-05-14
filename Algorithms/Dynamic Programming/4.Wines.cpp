#include <bits/stdc++.h>
using namespace std;
int dp[100][100] = {0};

int RecursiveWinesProfit(vector<int> wines, int i, int j, int y)
{
    if (i > j)
        return 0;
    int dp1 = wines[i] * y + RecursiveWinesProfit(wines, i + 1, j, y + 1);
    int dp2 = wines[j] * y + RecursiveWinesProfit(wines, i, j - 1, y + 1);

    return max(dp1, dp2);
}

int TopDownDPwinesProfit(vector<int> wines, int i, int j, int y)
{
    if (i > j)
        return 0;
    if (dp[i][j] != 0)
        return dp[i][j];
    int dp1 = wines[i] * y + TopDownDPwinesProfit(wines, i + 1, j, y + 1);
    int dp2 = wines[j] * y + TopDownDPwinesProfit(wines, i, j - 1, y + 1);

    return dp[i][j] = max(dp1, dp2);
}

int main()
{
    vector<int> wines = {2, 3, 5, 1, 4};
    int y = 1;
    cout << TopDownDPwinesProfit(wines, 0, wines.size() - 1, y) << endl;

    return 0;
}