/*
  Problem Link    :   https://codeforces.com/problemset/problem/1476/A
  Contest Link    :   https://codeforces.com/contest/1476/problem/A
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (n > k)
        {
            long long ans = (n + k - 1) / k;
            k = k * ans;
            ans = (k + n - 1) / n;
            cout << ans << endl;
        }
        else
        {
            long long ans = (n + k - 1) / n;
            cout << ans << endl;
        }
    }
    return 0;
}

/*
Easier (Shorter)Implementation

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long cf=(n+k-1)/k;
        long long sum=cf*k;
        cout<<(sum+n-1)/n<<endl;
    }

*/