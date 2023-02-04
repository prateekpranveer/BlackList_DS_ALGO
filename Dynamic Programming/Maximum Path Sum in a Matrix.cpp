int maxSum(int i, int j, int n, vector<vector<int>> &Matrix, vector<vector<int>> &dp) {
        if (i<0 || j<0 || i>n-1 || j>n-1) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        int a = Matrix[i][j] + maxSum (i+1, j, n, Matrix,dp);
        int b = Matrix[i][j] + maxSum (i+1, j-1, n, Matrix,dp);
        int c = Matrix[i][j] + maxSum (i+1, j+1, n, Matrix,dp);
        return dp[i][j] = max(a,max(b,c));
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        int n = Matrix.size();
        int maxS = 0;
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        for (int i = 0; i<n; i++) {
           int x = maxSum(0,i,n,Matrix,dp);
           maxS = max(maxS,x);
        }
        return maxS;
        // code here
    }