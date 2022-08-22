void dfs(int src, vector<int> adj[], vector<int>&vis, int c, int d) {
	    vis[src] = 1;
	    for (auto &x:adj[src]) {
	         if (vis[x] || x==d && src==c) continue;
	         dfs(x,adj,vis,c,d);
	    }
	}
 
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<int>vis(V,0);
        dfs(c,adj,vis,c,d); 
        return !vis[d];
    }