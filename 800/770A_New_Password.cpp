//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

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