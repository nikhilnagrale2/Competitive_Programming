//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include<bits/stdc++.h>
using namespace std;

/// trick := make garbage wires for 0 and n+1
// it will make solution shorter and 
//  because only else part will be required in that code.

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int temp;
    for(int i=0;i<m;i++){
        cin>>temp;
        temp--;
        int shotedbird;
        cin>>shotedbird;
        if(temp-1==-1){
            a[temp+1]+=a[temp]-shotedbird;
            a[temp]=0;
        }else if(temp+1==n){
            a[temp-1]+=(shotedbird-1);
            a[temp]=0;
        }else{
            a[temp+1]+=(a[temp]-shotedbird);
            a[temp-1]+=(shotedbird-1);
            a[temp]=0;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}