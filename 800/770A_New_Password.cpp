/*
    Problem Link    :   https://codeforces.com/problemset/problem/770/A
    Contest Link    :   https://codeforces.com/contest/770/problem/A
    Status          :   Accepted

    Author          :   Nikhil Nagrale
    Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
    Codechef        :   https://www.codechef.com/users/nikhilnagrale2
    Github          :   https://github.com/nikhilnagrale2

    Copyright       :   Solve it on your own.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    while(n--)
    s+=(char)(n%k+97);

    cout<<s<<endl;
    return 0;
}