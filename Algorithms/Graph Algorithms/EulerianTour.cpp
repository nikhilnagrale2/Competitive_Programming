#include <bits/stdc++.h>
using namespace std;

const int N = 100005, M = 22;
int tin1[N], tout1[N], timer;
int tin2[N], tout2[N];
int tin3[N], tout3[N];
vector<int> gr[N];

// whenever you are coming to a node you write it.
void euler_tour_1(int cur, int par)
{
    cout << cur << " ";
    // tin[cur] = timer++;
    for (auto x : gr[cur])
    {
        if (x != par)
        {
            euler_tour_1(x, cur);
            cout << cur << " ";
        }
    }
    // tin[cur] = timer++;
    return;
}

// whenever entering node write it and when leaving a node write it.
void euler_tour_2(int cur, int par)
{
    // tin[cur] = timer++;
    cout << cur << " ";
    for (auto x : gr[cur])
    {
        if (x != par)
        {
            euler_tour_2(x, cur);
        }
    }
    // tout[cur] = timer++;
    cout << cur << " ";
    return;
}

// enter a node increment time but when leaving dont
void euler_tour_3(int cur, int par)
{
    cout << cur << " ";
    //  enter a node
    tin3[cur] = timer++;
    for (auto x : gr[cur])
    {
        if (x != par)
        {
            euler_tour_3(x, cur);
        }
    }
    //  leave a node
    tout3[cur] = timer - 1;
    return;
}

// whethe x is an ancestor of y or not
bool is_ancestor(int x, int y)
{
    return tin3[x] <= tin3[y] && tout3[x] >= tout3[y];
}

int main()
{
    int j, k, n, m, ans = 0, sum = 0, cnt = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    timer = 1;
    euler_tour_1(1, 0);
    cout << endl;

    euler_tour_2(1, 0);
    cout << endl;

    euler_tour_3(1, 0);
    cout << endl
         << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << tin3[i] << " " << tout3[i] << endl;
    }
    cout << endl;

    if (is_ancestor(3, 8))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
/*
9
1 2 
2 4
2 5
2 6
1 3
3 7 
7 8
7 9
*/