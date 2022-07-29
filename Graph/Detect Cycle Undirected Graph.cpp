bool dfs(int src, vector<int>&vis, vector<int>adj[], int prev){
        vis[src] = 1;
        for (auto x : adj[src]){
            if (vis[x] && x!=prev){
                return true;
            }
            else if (!vis[x]){
                if (dfs(x,vis,adj,src)) return true;
            }
        }
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector <int> vis(V,0);
        for (int i = 0; i<V; i++){
            if (!vis[i]){
                if (dfs(i, vis, adj, -1)) return true;
            }
        }
        return false;
    }