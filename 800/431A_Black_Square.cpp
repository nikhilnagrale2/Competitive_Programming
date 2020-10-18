//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    for(int i=0;i<4;i++) cin>>a[i];
    string s;
    cin>>s;
    int ans=0;
    for(auto x:s){
        ans+=a[(int)x-'1'];
    }
    cout<<ans<<endl;
    return 0;
}