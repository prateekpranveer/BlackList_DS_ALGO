vector<vector<int>>v;
	void dfs(int src, vector<int>adj[], vector<int>&vis,stack<int>&st){
	    vis[src] = true;
	    for (auto x:adj[src]){
	        if (!vis[x]){
	            dfs(x,adj,vis,st);
	        }
	    }
	    st.push(src);
	}
	
	void rdfs(int src, vector<int>rev_adj[],vector<int>&vis2,vector<int>&components) {
	    vis2[src] = true;
	    vector<int>s;
	    components.push_back(src);
	    for (auto x:rev_adj[src]){
	        if(!vis2[x]) {
	            rdfs(x,rev_adj,vis2,components);
	        }
	    }
	}
    
    vector<vector<int>> tarjans(int V, vector<int> adj[])
    {
        vector<int>rev_adj[V];
        vector<int>vis(V,0);
        vector<int>vis2(V,0);
        stack<int>st;
        for (int i = 0; i<V; i++) {
            for (auto x:adj[i]){
                rev_adj[x].push_back(i);
            }
        }
        for (int i = 0; i<V; i++) {
            if (!vis[i])
                dfs(i,adj,vis,st);
        }
        while(!st.empty()) {
            if (!vis2[st.top()]){
                vector<int>components;
                rdfs(st.top(),rev_adj,vis2,components);
                sort(components.begin(),components.end());
                v.push_back(components);
            }
            st.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }