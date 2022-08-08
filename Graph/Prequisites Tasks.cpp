bool dfs(int src, vector<int>&vis, vector<int> adj[], vector<int>&temp_vis){
       vis[src] = 1;
       temp_vis[src] = 1;
       
       for (auto x : adj[src]){
           if (vis[x] && temp_vis[x] && src!=x){
               return true;
           }
           else if (!vis[x]){
               if (dfs(x,vis,adj,temp_vis)) return true;
           }
       }
       temp_vis[src] = 0;
       return false;
    }
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    
	    vector <int> adj[N];
	    for (auto x : prerequisites){
	        adj[x.second].push_back(x.first);
	    }
	    
	    
	    vector <int> temp_vis(N,0);
        vector <int> vis(N,0);
        
        if (!vis[0]){
            if (dfs(0,vis,adj, temp_vis)) return false;
        }
        
        return true;
	}