//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w, d;
    cin >> y >> w;
    string a[6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << a[max(y, w) - 1] << endl;
    return 0;
}