/*
  Problem Link    :   https://codeforces.com/problemset/problem/1473/B
  Contest Link    :   https://codeforces.com/contest/1473/problem/B
  Status          :   Accepted

  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int al = a.size();
        int bl = b.size();
        string lcms;
        if (al > bl)
        {
            for (int i = 0; i < lcm(al, bl) / al; i++)
            {
                lcms += a;
            }
            bool ok = true;
            for (int i = 0; i < lcms.length(); i++)
            {
                if (lcms[i] != b[i % bl])
                {
                    ok = false;
                }
            }
            if (ok)
                cout << lcms << endl;
            else
                cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < lcm(al, bl) / bl; i++)
            {
                lcms += b;
            }
            bool ok = true;
            for (int i = 0; i < lcms.length(); i++)
            {
                if (lcms[i] != a[i % al])
                {
                    ok = false;
                }
            }
            if (ok)
                cout << lcms << endl;
            else
                cout << "-1" << endl;
        }
    }
    return 0;
}

/*
Ideal Solution

#include <bits/stdc++.h>

using namespace std;

int main() {
  auto mul = [](string s, int k) -> string {
    string res = "";
    while (k--) res += s;
    return res;
  };
  
  int tc;
  cin >> tc;
  while (tc--) {
    string s, t;
    cin >> s >> t;
    int n = s.length(), m = t.length();
    int g = __gcd(n, m);
    if (mul(s, m / g) == mul(t, n / g))
      cout << mul(s, m / g) << endl;
    else
      cout << "-1" << endl;
  }
}
*/