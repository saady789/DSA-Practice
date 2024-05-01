#include<stack>
void dfs(int i, vector<int> &visited, vector<int> adjList[], stack<int> &topo) {
    if (visited[i]) return;
    visited[i] = 1;
    for (int j : adjList[i]) {
        dfs(j, visited, adjList, topo);
    }
    topo.push(i);
}

void dfs2(int i, vector<int> &visited, vector<int> adjList[]) {
    if (visited[i]) return;
    visited[i] = 1;
    for (int j : adjList[i]) {
        dfs2(j, visited, adjList);
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges) {
    // Topological sort
    vector<int> adjList[v];
    for (int i = 0; i < edges.size(); i++) {
        adjList[edges[i][0]].push_back(edges[i][1]);
    }
    stack<int> topo;
    vector<int> visited(v, 0);
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            dfs(i, visited, adjList, topo);
        }
    }

    // Transpose the graph
    vector<int> transpose[v];
    for (int i = 0; i < edges.size(); i++) {
        transpose[edges[i][1]].push_back(edges[i][0]);
    }

    // Find strongly connected components
    int comp = 0;
    vector<int> visited2(v, 0);
    while (!topo.empty()) {
        int i = topo.top();
        topo.pop();
        if (!visited2[i]) {
            dfs2(i, visited2, transpose);
            comp++;
            // Process component here, or just count them
        }
    }
    return comp;
}
