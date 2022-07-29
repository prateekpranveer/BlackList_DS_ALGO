bool dfs(int src, vector<int>&vis, vector<int> adj[], vector<int>&temp_vis){
       vis[src] = 1;
       temp_vis[src] = 1;
       
       for (auto x : adj[src]){
           if (vis[x] && temp_vis[x]){
               return true;
           }
           else if (!vis[x]){
               if (dfs(x,vis,adj,temp_vis)) return true;
           }
       }
       temp_vis[src] = 0;
       return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        vector <int> temp_vis(V,0);
        vector <int> vis(V,0);
        for (int i = 0; i<V; i++){
            if (!vis[i]){
                if (dfs(i,vis,adj, temp_vis)) return true;
            }
        }
        return false;
    }