int dp[102][102];
    int maximumGold (int i, int j , int n, int m, vector<vector<int>> &M) {
        if (i<0 || j<0 || i>n-1 || j>m-1) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        int a = M[i][j] + maximumGold(i+1, j+1, n,m, M);
        int b = M[i][j] + maximumGold(i-1, j+1, n,m, M);
        int c = M[i][j] + maximumGold(i, j+1, n,m, M);
        return dp[i][j] = max(a, max(b,c));
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int maxG = 0;
        memset(dp, -1, sizeof dp);
        for (int i = 0; i<n; i++) {
            int x = maximumGold(i, 0, n, m, M);
            maxG = max(maxG, x);
        }
        return maxG;
    }