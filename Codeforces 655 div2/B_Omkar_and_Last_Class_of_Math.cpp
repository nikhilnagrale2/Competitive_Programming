#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
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

        vi a,b,c;
        ll index;
        ll k=n;
        fr(i,0,n/2-1)
        {
            a.pb(i+1);
            b.pb(n-(i+1));

            ll max=(a[i]>b[i])?a[i]:b[i];

            do
            {
                if(max%a[i]==0 && max%b[i]==0)
                {
                    break;
                }
                else
                    ++max;
            }while(true);

            c.pb(max);
        }
        index=min_element(c.begin(),c.end())-c.begin();

        cout<<a[index]<<" "<<b[index]<<"\n";
    }
    return 0;
}