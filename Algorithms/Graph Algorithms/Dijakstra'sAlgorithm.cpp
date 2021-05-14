#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    unordered_map<T, list<pair<T, int>>> mp;

public:
    void addEdge(T u, T v, int dist, bool bidir = true)
    {
        mp[u].push_back({v, dist});
        if (bidir)
        {
            mp[v].push_back({u, dist});
        }
    }

    void printAdj()
    {
        for (auto j : mp)
        {
            cout << j.first << " --> ";
            for (auto l : j.second)
            {
                cout << "(" << l.first << ", " << l.second << " )";
            }
            cout << endl;
        }
    }

    void dijakstraSSSP(T src)
    {
        unordered_map<T, int> dist;

        for (auto j : mp)
        {
            dist[j.first] = INT_MAX;
        }

        set<pair<int, T>> s;
        dist[src] = 0;
        s.insert({0, src});
        while (!s.empty())
        {
            auto p = *(s.begin());
            T node = p.second;
            int nodeDist = p.first;
            s.erase(s.begin());

            for (auto childPair : mp[node])
            {
                if (nodeDist + childPair.second < dist[childPair.first])
                {
                    T dest = childPair.first;
                    auto f = s.find({dist[childPair.first], childPair.first});
                    if (f != s.end())
                    {
                        s.erase(f);
                    }

                    dist[dest] = nodeDist + childPair.second;
                    s.insert({dist[dest], dest});
                }
            }
            for (auto d : dist)
            {
                cout << d.first << " is located at distance of " << d.second << endl;
            }
        }
    }
};

int main()
{
    Graph<string> india;
    india.addEdge("Amritsar", "Delhi", 1);
    india.addEdge("Amritsar", "Jaipur", 4);
    india.addEdge("Jaipur", "Delhi", 2);
    india.addEdge("Jaipur", "Mumbai", 8);
    india.addEdge("Bhopal", "Agra", 2);
    india.addEdge("Mumbai", "Bhopal", 3);
    india.addEdge("Agra", "Delhi", 1);

    india.printAdj();

    // india.dijakstraSSSP("Amritsar");
    return 0;
}