long long dp[100004];
    long long mod = 1e9+7;
    long long ways(int n) {
        if (n==1) return 1;
        if (n==2) return 2;
        if (n==3) return 4;
        if (dp[n]!=-1) return dp[n];
        return dp[n] = (ways(n-1)%mod + ways(n-2)%mod +ways(n-3)%mod)%mod;
    }
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        memset(dp, -1, sizeof dp);
        return ways(n)%mod;
        // your code here
        
    }