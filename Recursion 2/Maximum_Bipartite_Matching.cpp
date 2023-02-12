bool applicable(vector<vector<int>>&G, int per, vector<int>&vis, vector<int>&job) {
        for (int i = 0; i<G[0].size(); i++) {
            if (G[per][i] == 1 && !vis[i]) {
                vis[i] = 1;
                if (job[i]==-1) {
                    job[i] = per;
                    return true;
                }
                else if (applicable(G,job[i], vis, job)) {
                    job[i] = per;
                    return true;
                }
            }
        }
        return false;
    }
	int maximumMatch(vector<vector<int>>&G){
	   int m = G.size();
	   int n = G[0].size();
	   vector<int>job(n, -1);
	   int ans = 0;
	   for (int i = 0; i<m; i++) {
	       vector<int> vis(n,0);
	       if (applicable(G, i, vis, job)) {
	           ans++;
	       }
	   }
	   return ans;
	}
