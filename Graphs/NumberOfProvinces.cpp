class Solution {
public:
    void DFS(int index, vector<int> adj[], vector<bool>& visited) {
        if (visited[index] == false) {
            visited[index] = true;
        }
        for (int i : adj[index]) {
            if (visited[i] == false) {
                DFS(i, adj, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int size = isConnected.size();
        vector<int> adjList[size];
        vector<bool> visited(size, false);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j)
                    continue;
                if (isConnected[i][j] == 1) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        int count = 0;
        for(int i=0;i<size;i++){

            if(visited[i] == false){
                visited[i] = true;
                count++;
                DFS(i,adjList,visited);
            }
        }
        return count;
    }
};


//by disjoin set by size 
 int findParent(int i,vector<int> &parent){
        if(i==parent[i]) return i;
        return parent[i] = findParent(parent[i],parent);
    }
   int numProvinces(vector<vector<int>> adj, int V) {
  vector<int> size(V, 1);
  vector<int> parent(V);
  set<int> mySet;
  vector<pair<int, int>> edges;

  // Initialize all parents to their own indices
  for (int i = 0; i < V; i++) {
    parent[i] = i;
  }

  for (int i = 0; i < adj.size(); i++) {
    for (int j = 0; j < adj[i].size(); j++) {
      if (i == j) continue;
      if (adj[i][j] == 1) {
        edges.push_back(make_pair(i, j));
      }
    }
  }

  for (auto it : edges) {
    int node1 = it.first;
    int node2 = it.second;
    int parentNode1 = findParent(node1, parent);
    int parentNode2 = findParent(node2, parent);
    if (parentNode1 == parentNode2) continue;
    if (size[parentNode1] < size[parentNode2]) {
      parent[parentNode1] = parentNode2;
      size[parentNode2] += size[parentNode1];
    } else {
      parent[parentNode2] = parentNode1;
      size[parentNode1] += size[parentNode2];
    }
  }

  // Add isolated nodes to mySet
  for (int i = 0; i < V; i++) {
    if (findParent(i, parent) == i) {
      mySet.insert(i);
    }
  }

  return mySet.size();
}