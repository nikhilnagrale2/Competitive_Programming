/*
    Problem Link    :   https://codeforces.com/problemset/problem/490/A
    Contest Link    :   https://codeforces.com/contest/490/problem/A
    Status          :   Accepted

    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Solve it on your own.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n] = {0};
    vector<vector<int>> v(3);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==1) v[0].push_back(i+1);
        if(a[i]==2) v[1].push_back(i+1);
        if(a[i]==3) v[2].push_back(i+1);
    }
    int ans=min(v[0].size(),min(v[1].size(),v[2].size()));
    cout<<ans<<endl;
    if(ans){
        for(int i=0;i<ans;i++){
            cout<<v[0][i]<<" "<<v[1][i]<<" "<<v[2][i]<<endl;
        }
    }
    
    return 0;
}