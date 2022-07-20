void dfs(vector<int>&dfs_list, vector<int>adj[], int i, vector<int>&vis){
        dfs_list.push_back(i);
        vis[i] = 1;
        for (auto x:adj[i]){
            if (vis[x]==0){
                dfs(dfs_list,adj,x,vis);
            }
        }
    }
 
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>vis(V+1,0);
        vector<int>dfs_list;
        dfs(dfs_list,adj,0,vis);
        return dfs_list;
    }