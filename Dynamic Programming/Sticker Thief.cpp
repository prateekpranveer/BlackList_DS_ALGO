int dp[10004];
    
    int maxLoot(int arr[], int i){
        if (i<0) return 0;
        //take
        if (dp[i]!=-1) return dp[i];
        return dp[i] = max(arr[i] + maxLoot(arr, i-2), maxLoot(arr,i-1));
    }
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        memset(dp,-1,sizeof(dp));
        return maxLoot(arr,n-1);
        // Your code here
    }
