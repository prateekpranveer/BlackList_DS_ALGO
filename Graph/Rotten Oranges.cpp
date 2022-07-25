int orangesRotting(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        for (int i = 0; i<grid.size(); i++){
            for (int j = 0; j<grid[0].size(); j++){
                if (grid[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
        while(q.size()){
                auto top = q.front();
                int t = top.second;
                ans = max(ans,t);
                int cx = top.first.first;
                int cy = top.first.second;
                int tx[4] = {-1,1,0,0};
                int ty[4] = {0,0,-1,1};
                for (int x = 0; x<4; x++){
                    if (cx+tx[x]>=0 && cy+ty[x]>=0 && cx+tx[x]<n && cy+ty[x]<m){
                        if (grid[cx+tx[x]][cy+ty[x]]==1){ 
                            grid[cx+tx[x]][cy+ty[x]]=2;
                            q.push({{cx+tx[x],cy+ty[x]},t+1});
                        }
                    }
                }
                q.pop();
            }
        
        for (int p = 0; p<n; p++){
            for (int q = 0; q<m; q++){
                if (grid[p][q]==1) ans = -1;
            }
        }
        return ans;
    }