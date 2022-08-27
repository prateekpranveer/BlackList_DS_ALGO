int dp[1000005];
	int coinchange(int id, int coins[], int ct, int M, int V) {
	    if (V==0) return ct;
	    if (V<0 || id>=M) return INT_MAX;
	    if (dp[V]!=-1) return dp[V];
	    int b = coinchange(id,coins,ct+1, M, V-coins[id]);
	    int a = coinchange(id+1, coins, ct, M, V);
	    return dp[V] = min(a,b);
	    
	    }
	int minCoins(int coins[], int M, int V) 
	{ 
	    sort(coins,coins+M);
	    memset(dp, -1, sizeof dp);
	    int ct = 0;
	    return coinchange(0, coins, ct, M, V) != INT_MAX ? coinchange(0, coins, ct, M, V) : -1;
	
	} 