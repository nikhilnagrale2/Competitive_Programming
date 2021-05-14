#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<vector<int>> dp(1000, vector<int>(1000));
    for (int i = 0; i < n; i++)
        dp[i][i] = true;

    for (int i = 2; i <= n; i++)
        for (int j = 0; j + i - 1 < n; j++)
        {
            int start = j, end = j + i - 1;
            if (i == 2)
                dp[start][end] = (s[start] == s[end]);
            else
                dp[start][end] = (s[start] == s[end]) && (dp[start + 1][end - 1]);
        }

    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << (dp[l - 1][r - 1] ? "YES" : "NO") << endl;
    }
}