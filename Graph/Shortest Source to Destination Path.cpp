int shortestDistance(int n, int m, vector<vector<int>> A, int X, int Y) {
        if (A[0][0]==0) return -1;
        vector <vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        vector<vector<int>>dis(n,vector<int>(m,-1));
        q.push({0,0});
        dis[0][0] = 0;
        vis[0][0] = 1;
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            int idn = it.first;
            int idm = it.second;
            int dx[4] = {1,0,-1,0};
            int dy[4] = {0,1,0,-1};
            for (int i = 0; i<4; i++) {
                if (idn+dx[i]>=0 && idm+dy[i]>=0 && idn+dx[i]<n && idm+dy[i]<m && vis[idn+dx[i]][idm+dy[i]]==0 && A[idn+dx[i]][idm+dy[i]]==1) {
                    vis[idn+dx[i]][idm+dy[i]]=dis+1;
                    dis[idn+dx[i]][idm+dy[i]]=dis[idn][idm]+1;
                    q.push({idn+dx[i],idm+dy[i]});
                }
            }
        }
        
        return dis[X][Y];
        
    }