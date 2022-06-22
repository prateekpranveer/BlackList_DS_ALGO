// Count Possible ways to Construct a Building
// Dynamic Programming

long long dp[100005];
	const int mod = 1e9+7;
	long long totalWays(int n){
	    if (n<0) return 0;
	    if (dp[n]!=-1) return dp[n];
	    //take
	    long long a = (1+totalWays(n-2))%mod;
	    //not take
	    long long b = totalWays(n-1)%mod;
	    
	    return dp[n] = (a+b)%mod;
	}
	
	
	long long TotalWays(int N)
	{
	    memset(dp,-1,sizeof(dp));
	    long long x = 1+totalWays(N-1)%mod;
	    return (x*x)%mod;
	    
	    // Code here
	}