int dp[1000006];
	int maxSum(int i, int *arr) {
	    if (i<0) return 0;
	    if (dp[i]!=-1) return dp[i];
	    int a = arr[i]+maxSum(i-2, arr);
	    int b = maxSum(i-1,arr);
	    return dp[i] = max(a,b);
	}
	int findMaxSum(int *arr, int n) {
	    memset(dp, -1, sizeof dp);
	    int i = n-1;
	    return maxSum(i,arr);
	}