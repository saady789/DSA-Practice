int spanningTree(int V, vector<vector<int>> adj[]) {
    vector<int> visited(V, 0);
    int weight = 0;
    int edges = 0;
    int target = V - 1;
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> q;
    // <weight, node, father>
    q.push(make_tuple(0, 0, -1));

    while (!q.empty()) {
        int w, node, father;
        tie(w, node, father) = q.top();
        q.pop();

        if (visited[node]) continue; // continue if already visited 

        visited[node] = 1;
        weight += w;

        if (father != -1) edges++;

        if (edges == target) break;

        for (vector<int>& arr : adj[node]) {
            int node2 = arr[0];
            int w2 = arr[1];
            if (!visited[node2]) {
                q.push(make_tuple(w2, node2, node));
            }
        }
    }

    return weight;
}