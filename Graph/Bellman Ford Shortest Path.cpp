const int inf = 1e8;
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        vector <int> dist(V, inf);
        dist[S] = 0;
        for (int i = 0; i<V-1; i++){
            for (auto x:adj){
                int u = x[0];
                int v = x[1];
                int w = x[2];
                // Make Relaxations
                if (dist[u]!=inf && dist[u] + w<dist[v]){
                    dist[v] = dist[u] + w;
                }
            }
        }
        return dist;
    }
