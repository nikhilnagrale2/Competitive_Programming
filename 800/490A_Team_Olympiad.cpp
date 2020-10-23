//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n] = {0};
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mpp[a[i]]++;
    }
    for (auto x : mpp)
    {
        if (x.second == 0)
        {
            cout << "0" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            v[1]
    }
    return 0;
}