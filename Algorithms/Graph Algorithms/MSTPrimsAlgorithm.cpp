#include <bits/stdc++.h>
using namespace std;

class Graph
{
    vector<pair<int, int>> *l;
    int V;

public:
    Graph(int V)
    {
        V = V;
        l = new vector<pair<int, int>>[V];
    }

    void addEdge(int x, int y, int w)
    {
        l[x].push_back({y, w});
        l[y].push_back({x, w});
    }

    int prim_mst()
    {
        //Min heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

        bool *visited = new bool[V]{0};

        int ans = 0;

        Q.push({0, 0}); //weight,node
        while (!Q.empty())
        {
            auto best = Q.top();
            Q.pop();
            int to = best.second;
            int weight = best.first;

            if (visited[to])
            {
                continue;
            }

            ans += weight;
            visited[to] = 1;

            for (auto x : l[to])
            {
                if (visited[x.first] == 0)
                {
                    Q.push({x.second, x.first});
                }
            }
        }
        return ans;
    }
};

int main()
{
    int V, edges;
    cin >> V >> edges;
    Graph g(V);
    for (int i = 0; i < edges; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        g.addEdge(x - 1, y - 1, w);
    }

    cout << g.prim_mst() << endl;

    return 0;
}