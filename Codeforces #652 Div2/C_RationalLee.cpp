#include<bits/stdc++.h>
#include<iostream>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<=b;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int a[n];
        
        fr(i,0,n-1)
        cin>>a[i];
        
        int w[k];
        
        fr(i,0,k-1)
        cin>>w[i];

        sort(a);

        int maximum=0;
        int minimum=0;
        int ans=0;

        int 
    }
    return 0;
}