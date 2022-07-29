bool dfs(int sr, int sc, int dr, int dc, int n, int m, vector<vector<int>>&grid){
        if (sr<0 || sc<0 || sr>=n || sc>=m) return false; // out of grid condition
        bool a,b,c,d;
        // wall block and already visited condition
        if (grid[sr][sc]==0 || grid[sr][sc]==INT_MAX) return false; 
        // found destination condition
        if (sr == dr && sc == dc) return true;
        // Marking Visited
        grid[sr][sc] = INT_MAX;
        // Returning any of the possible path
        a = dfs(sr+1,sc,dr,dc,n,m,grid);
        b = dfs(sr-1,sc,dr,dc,n,m,grid);
        c = dfs(sr,sc+1,dr,dc,n,m,grid);
        d = dfs(sr,sc-1,dr,dc,n,m,grid);
        return a|b|c|d;
    }
    
    bool is_Possible(vector<vector<int>>& grid) {
       int sr, sc, dr, dc;
       int n = grid.size();
       int m = grid[0].size();
       
       for (int i = 0; i<n; i++){
           for (int j = 0; j<n; j++){
               // finding source
               if (grid[i][j]==1){
                   sr = i;
                   sc = j;
               }
               //finding destination
               if (grid[i][j]==2){
                   dr = i;
                   dc = j;
               }
           }
       }
       // running dfs
       return dfs(sr,sc,dr,dc,n,m,grid);
    }