//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int i = 0;
    for (i = 1;; i++)
    {
        if (k * i % 10 == 0 || k * i % 10 == r)
            break;
    }
    cout << i << endl;
    return 0;
}