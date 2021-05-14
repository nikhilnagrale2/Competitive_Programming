#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySumBruteforce(vector<int> a, int n)
{
    int ans = 0;
    if (a[0] > 0)
        ans = a[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = 0;
            for (int k = i; k <= j; k++)
            {
                temp += a[k];
            }
            ans = max(ans, temp);
        }
    }

    return ans;
}

int maxSubarraySumPrefixSum(vector<int> a, int n)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i] + a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans = max(ans, a[j] - a[i]);
        }
    }
    return ans;
}

int maxSubarraySumDP(vector<int> a, int n)
{
    int n = a.size();
    int ans = 0;
    int dp[100] = {};
    dp[0] = a[0] > 0 ? a[0] : 0;
    ans = dp[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = dp[i - 1] + a[i];
        if (dp[i] < 0)
            dp[i] = 0;
        ans = max(dp[i], ans);
    }

    return ans;
}

// Kadane's Algo
int maxSubarraySumDPSpace(vector<int> a.int n)
{
    int curr = 0, maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        curr += a[i];
        if (curr < 0)
            curr = 0;
        maxSum = max(curr, maxSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << maxSubarraySumDPSpace(a, n) << endl;
    return 0;
}