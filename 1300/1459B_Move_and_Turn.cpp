/*
  Problem Link    :   https://codeforces.com/problemset/problem/1459/A
  Contest Link    :   https://codeforces.com/contest/1459/problem/A
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
    long long n;
    cin >> n;
    long long ans = 0;
    if (n & 1)
    {
        ans = 1 + (3 * n * (n + 4) + 2 - (-1) * (n * (n + 4) + 2)) / 8;
    }
    else
    {
        ans = 1 + (3 * n * (n + 4) + 2 - (n * (n + 4) + 2)) / 8;
    }
    cout << ans << endl;
    return 0;
}
// Another Solution
/*
odd terms ki ap 
even terms ka square
if(n%2==0){
	int t=(n/2)+1;
	cout(t*t);
}else{
	int t=n+2;
	cout((t*t-1)/2);
}
*/

//Another Solution
/*
    if(n % 2 == 0) cout << (n / 2 + 1) * (n / 2 + 1) << '\n';
    else cout << 2 * (n / 2 + 1) * (n / 2 + 2) << '\n';
*/