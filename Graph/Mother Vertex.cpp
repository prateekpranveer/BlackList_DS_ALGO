void dfs(int i, vector<int>adj[], vector<int>&visited, vector<int>&vis){
        vis.push_back(i);
        visited[i] = 1;
        for (auto x:adj[i]){
            if (!visited[x]){
                dfs(x,adj,visited,vis);
            }
        }
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    int ans= -1;
	    for (int i = 0; i<V; i++){
	        vector <int> vis;
	        vector<int>visited(V,0);
	        if (!visited[i]){
	            dfs(i,adj,visited,vis);
	            if (vis.size()==V){
	                ans = i;
	                break;
	            }
	        }
	    }
	    return ans;
	}