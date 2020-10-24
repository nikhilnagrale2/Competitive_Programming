//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform

#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int temp)
{
    if (s.top() < temp || s.size()==0)
    {
        s.push(temp);
        return;
    }

    if (s.top() > temp)
    {
        int val = s.top();
        s.pop();
        insert(s, temp);
        s.push(val);
        return;
    }
}

int main()
{
    int n;
    cin >> n;
    int pos = n;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (s.size() == 0)
            s.push(temp);
        else
        {
            insert(s, temp);
        }

        if (s.top() == pos)
        {
            while (!s.empty() && s.top() == pos)
            {
                cout << s.top() << " ";
                s.pop();
                pos--;
            }
        }
        cout << endl;
    }
    return 0;
}


//10
//5 1 6 2 8 3 4 10 9 7