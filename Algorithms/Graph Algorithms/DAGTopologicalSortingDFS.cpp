/*
  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Leetcode        :   https://leetcode.com/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
	map<T, list<T>> l;

public:
	void addEdge(T x, T y)
	{
		l[x].push_back(y);
		// l[y].push_back(x);
	}

	void dfs_helper(T src, map<T, bool> &visited, list<T> &ordering)
	{
		visited[src] = true;

		for (T nbr : l[src])
		{
			if (!visited[nbr])
			{
				dfs_helper(nbr, visited, ordering);
			}
		}
		ordering.push_front(src);

		return;
	}

	void dfs()
	{
		map<T, bool> visited;
		list<T> ordering;

		for (auto p : l)
		{
			T node = p.first;
			visited[node] = false;
		}

		for (auto p : l)
		{
			T node = p.first;
			if (!visited[node])
			{
				dfs_helper(node, visited, ordering);
			}
		}

		for (auto node : ordering)
			cout << node << endl;
	}
};

int main()
{
	Graph<string> g;

	g.addEdge("Python", "DataPreprocessing");
	g.addEdge("Python", "PyTorch");
	g.addEdge("Python", "ML");
	g.addEdge("DataPreprocessing", "ML");
	g.addEdge("PyTorch", "DL");
	g.addEdge("ML", "DL");
	g.addEdge("DL", "FaceRecogn");
	g.addEdge("DataSet", "FaceRecogn");

	g.dfs();

	return 0;
}