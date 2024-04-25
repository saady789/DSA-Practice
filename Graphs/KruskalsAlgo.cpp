int findUParent(int i, vector<int> &parent, vector<int> &size) {
  if (i != parent[i]) {
    parent[i] = findUParent(parent[i], parent, size); // Path compression
  }
  return parent[i];
}

int spanningTree(int V, vector<vector<int>> adj[]) {
  vector<int> parent(V, 0);
  vector<int> size(V, 1); // Initialize size for each vertex

  for (int i = 0; i < V; i++) {
    parent[i] = i; // Initialize each vertex as its own parent (forest of single vertices)
  }

  vector<tuple<int, int, int>> edges;

  for (int i = 0; i < V; i++) {
    for (vector<int> arr : adj[i]) {
      edges.push_back(make_tuple(arr[1], arr[0],i)); // Store weight, source, and destination
    }
  }

  sort(edges.begin(), edges.end());

  int weight = 0;
  for (auto it : edges) {
    int w = get<0>(it);
    int node1 = get<1>(it);
    int node2 = get<2>(it);

    int ulp_u = findUParent(node1, parent, size);
    int ulp_v = findUParent(node2, parent, size);

    if (ulp_v == ulp_u) {
      continue; // Ignore edges that create cycles
    }

    // Update parent and size based on sizes for efficient union
    if (size[ulp_u] < size[ulp_v]) {
      parent[ulp_u] = ulp_v;
      size[ulp_v] += size[ulp_u];
    } else {
      parent[ulp_v] = ulp_u;
      size[ulp_u] += size[ulp_v];
    }

    weight += w;
  }

  return weight;
}