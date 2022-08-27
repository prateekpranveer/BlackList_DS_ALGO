



void dfs(int src, vector<int>&vis, vector<int>g[], vector<int>&maintain){
	    vis[src] = 1;
	    for (auto x: g[src]){
	        if (!vis[x]){
	            dfs(x,vis,g, maintain);
	        }
	    }
	    maintain.push_back(src);
	}
	
	void rdfs(int src, vector<int>&vis1, vector<int>rev_adj[]){
	    vis1[src] = 1;
	    for (auto x : rev_adj[src]){
	        if (!vis1[x]){
	            rdfs(x,vis1,rev_adj);
	        }
	    }
	}
	
    int kosaraju(int V, vector<int> adj[])
    {
        vector<int>maintain;
        vector<int>order(V);
        vector<int>vis(V,0);
        vector<int>vis1(V,0);
        vector <int> adj_rev[V];
        for (int y = 0; y< V; y++){
            for (auto x : adj[y]){
                adj_rev[x].push_back(y);
            }
        }
        
        for (int i = 0; i<V; i++){
            if (!vis[i]){
                dfs(i, vis, adj, maintain);
            }
        }
        
        int ct = 0;
        
        for (int i = V-1; i>=0; i--){
            if (!vis1[maintain[i]]){
                rdfs(maintain[i],vis1,adj_rev);
                ct++;
            }
        }
        return ct;
    }