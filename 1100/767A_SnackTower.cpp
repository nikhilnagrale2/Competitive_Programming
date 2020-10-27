//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, top;
    cin >> n;
    top = n;
    vector<int> a(n);
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        visited[a[i]] = true;
        while (visited[top] == true)
            cout << top-- << " ";
        cout << endl;
    }
    return 0;
}

//10
//5 1 6 2 8 3 4 10 9 7