bool bfs(int s, vector<int>adj[], vector<int>&color){
	    queue<int>q;
	    q.push(s);
	    color[s] = 1;
	    while(!q.empty()){
	        int x = q.front();
	        q.pop();
	        for (auto t:adj[x]){
	            if (color[t]==-1){
	                color[t] = 1-color[x];
	                q.push(t);
	            }
	            if (color[t]==color[x]) return false;
	        }
	    }
	    return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int>color(V,-1);
	    for (int i = 0; i<V; i++){
	        if (color[i]==-1){
	            if (!bfs(i,adj,color)) return false;
	        }
	    }
	    return true;
	}