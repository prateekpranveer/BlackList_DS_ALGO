void dfs(int i, stack<int>&s, vector<int> adj[], vector<int>&vis){
	    vis[i]=1;
	    
	    for (auto x:adj[i]){
	        if (vis[x]==0){
	            dfs(x,s,adj,vis);
	        }
	    }
	    s.push(i);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>vis(V+1,0);
	    stack <int>s;
	    vector<int>ans;
	    for (int i = 0; i<V; i++){
	        if (!vis[i])
	            dfs(i,s,adj,vis);
	    }
	    while(!s.empty()){
	        int x = s.top();
	        ans.push_back(x);
	        s.pop();
	    }
	    return ans;
	}