void dfs(int u, int parent, int &time, vector<int>adj[], vector<bool>&isArticulation, vector<int>&disc, vector<int>&low, vector<bool> &vis){
        vis[u] = true;
        int all_child = 0;
        disc[u] = low[u] = time++;
        for (auto v: adj[u]){
            if (!vis[v]){
                all_child++;
                dfs(v,u,time,adj,isArticulation,disc,low,vis);
                low[u] = min(low[u],low[v]);
                if(low[v]>=disc[u]&& parent !=-1) isArticulation[u] = true;
            }
            else if (v!=parent) low[u] = min(low[u],disc[v]);
            if (all_child>1 && parent == -1) isArticulation[u] = true;
        }
    }
    
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        vector<bool>vis(V,0);
        vector<int>low(V,-1);
        vector<int>disc(V,-1);
        vector<bool>isArticulation(V,false);
        vector <int> ans;
        int time = 0;
        for (int i = 0; i<V; i++){
            if (!vis[i]){
                dfs(i,-1,time,adj,isArticulation,disc,low,vis);
            }
        }
        for (int i = 0; i<V; i++){
            if (isArticulation[i]==true){
                ans.push_back(i);
            }
        }
        if (ans.size()==0) return {-1};
        return ans;
    }