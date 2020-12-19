/*
  Problem Link    :   https://codeforces.com/problemset/problem/1463/B
  Contest Link    :   https://codeforces.com/contest/1463/problem/B
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            int p = log2(a[i]);
            b[i] = (1 << p);
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Another Possible Solution
/*
long long evensum=0,oddsum=0;
for(int i=0;i<n;i+=2){
    oddsum+=a[i];
}
for(int i=1;i<n;i+=2){
    evensum+=a[i];
}
if(oddsum>evensum){
    for(int i=1;i<n;i+=2){
        a[i]=1;
    }
}else{
    for(int i=0;i<n;i+=2){
        a[i]=1;
    }
}
print the array.
*/