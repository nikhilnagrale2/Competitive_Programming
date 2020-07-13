#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 
typedef vector < int > vi; 
typedef pair < int, int > pi; 
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b)for (int i = a; i <= b; i++)

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        ll n; 
        cin >> n; 
        if (n%4!=0)
        cout << "NO\n"; 
        else
        cout << "YES\n"; 
    }
    return 0; 
}