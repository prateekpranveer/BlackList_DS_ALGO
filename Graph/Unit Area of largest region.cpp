int area = 0;
    void co_area (int sr, int sc, int n, int m, vector<vector<int>>&grid){
        if (sr<0 || sc<0|| sr>=n || sc>=m) return;
        if (grid[sr][sc]==0) return;
        if (grid[sr][sc]==2) return;
        if (grid[sr][sc]==1) {
            grid[sr][sc]=2;
            area ++;
            int dx[8] = {1,1,1,-1,-1,-1,0,0};
            int dy[8] = {0,1,-1,0,1,-1,1,-1};
            for (int i = 0; i<8; i++){
                co_area(sr+dx[i], sc+dy[i], n,m,grid);
            }
        
        }
    }
    int findMaxArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxArea = 0;
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                co_area(i,j,n,m,grid);
                maxArea = max(maxArea, area);
                area = 0;
            }
        }
        return maxArea;
    }