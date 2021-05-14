#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

long long vertices = 0;

class graph
{
    unordered_map<long long, list<long long>> l;

public:
    void addEdge(long long x, long long y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void dfs_helper(long long src, map<long long, bool> &vis, long long &size)
    {
        vis[src] = true;
        size++;
        for (auto nbr : l[src])
        {
            if (!vis[nbr])
            {
                dfs_helper(nbr, vis, size);
            }
        }
    }

    map<long long, bool> vis;
    void init()
    {
        for (auto p : l)
        {
            long long node = p.first;
            vis[node] = false;
        }
    }

    long long dfs(long long src)
    {
        long long size = 0;
        dfs_helper(src, vis, size);
        return size;
    }
};

// Complete the journeyToMoon function below.
long long journeyToMoon(long long n, vector<vector<long long>> astronaut)
{
    graph g;
    long long ans = 0;

    for (auto x : astronaut)
    {
        g.addEdge(x[0], x[1]);
    }
    g.init();
    vector<long long> same;
    for (long long i = 0; i < n; i++)
    {
        if (g.vis[i] == false)
        {
            long long size = g.dfs(i);
            same.push_back(size);
        }
    }
    ans = n * (n - 1) / 2;
    for (auto x : same)
    {
        ans -= x * (x - 1) / 2;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string np_temp;
    getline(cin, np_temp);

    vector<string> np = split_string(np_temp);

    long long n = stoi(np[0]);

    long long p = stoi(np[1]);

    vector<vector<long long>> astronaut(p);
    for (long long i = 0; i < p; i++)
    {
        astronaut[i].resize(2);

        for (long long j = 0; j < 2; j++)
        {
            cin >> astronaut[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long long result = journeyToMoon(n, astronaut);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}