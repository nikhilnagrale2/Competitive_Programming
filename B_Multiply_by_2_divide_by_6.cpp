#include<bits/stdc++.h>
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
        ll n;
        cin>>n;
        ll count=0;
        while(n!=1)
        {
            if(n%6==0)
            {
                n/=6;
            }
            else
            {
                n*=2;
            }
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}