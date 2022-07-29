const int inf = 1e9 + 10;
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int>dist(n,inf);
	    dist[0] = 0;
	    for (int i = 0; i<n-1; i++){
	        for (auto x : edges){
	            int u = x[0];
	            int v = x[1];
	            int w = x[2];
	            // do relaxation for n-1 times
    	        if (dist[u]!=inf && dist[u]+w<dist[v]){
    	            dist[v] = dist[u] + w;
    	        }
	        }
	    }
	    
	    // do relaxation nth time
	    bool detected = false;
	    for (auto x: edges){
	        int u = x[0];
	        int v = x[1];
	        int w = x[2];
	        if (dist[u]+w<dist[v]) detected = true;
	    }
	    
	    return detected;
	}