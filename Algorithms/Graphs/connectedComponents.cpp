/*
Connected Components of a Graph


A graph can have multiple component
even a single node can be called component

how to find Number of component?
hint - visited array

pseudo code
int cnt=0;
for (int i = 0; i < n; i++) {
    if ( !vis[i] ) {
        cnt++;
        dfs(); or bfs();
    }
}

cnt is number of components in a graph

whenever a graph is disconnected we call individual component as component
*/