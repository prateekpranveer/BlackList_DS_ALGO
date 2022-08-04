#define pp pair<int,pair<int,int>>
    int minimumCostPath(vector<vector<int>>& grid) {
        int N = grid.size();
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};
        priority_queue<pp,vector<pp>,greater<pp>>pq;
        vector<vector<int>>dis(N,vector<int>(N,INT_MAX));
        vector<vector<int>>vis(N,vector<int>(N,0));
        dis[0][0] = grid[0][0];
        pq.push({grid[0][0],{0,0}});
        while(!pq.empty()){
            auto it = pq.top();
            int max_dist = it.first;
            int node_row = it.second.first;
            int node_col = it.second.second;
            pq.pop();
            for (int i = 0; i<4; i++){
                int a = dx[i] + node_row;
                int b = dy[i] + node_col;
                if (a>=0 && b>=0 && a<N && b<N && !vis[a][b]){
                    vis[a][b] = 1;
                    if (max_dist + grid[a][b]<dis[a][b]){
                        dis[a][b] = max_dist + grid[a][b];
                        pq.push({dis[a][b], {a,b}});
                    }
                }
            }
        }
        
        return dis[N-1][N-1];
    }