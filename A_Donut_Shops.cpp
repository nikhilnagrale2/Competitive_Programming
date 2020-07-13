#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if (a * b > c && a > c)
        {
            cout << "-1 " << b << "\n";
            break;
        }

        if (a * b == c)
        {
            cout << b - 1 << " -1";
            break;
        }

        if (a * b > c && a < (ceil)(c / b))
        {
            cout << "1 " << b << "\n";
            break;
        }

        else
        {
            cout << "1 " << b << "\n";
        }
    }
    return 0;
}