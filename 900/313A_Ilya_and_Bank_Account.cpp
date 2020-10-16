//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long Max=n;
    if(n<0){
        if(n/10>Max) Max=n/10;
        if(n%10+(n/100)*10>Max) Max=n%10+(n/100)*10;
        cout<<Max<<endl;
    }
    else{
        cout<<n<<endl;
    }
    return 0;
}