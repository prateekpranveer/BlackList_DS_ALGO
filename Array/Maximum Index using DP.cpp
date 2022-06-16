// Time Complexity - 0(n^2)
// Giving TLE due to range 

int maxm(int arr[], int i, int j, vector<vector<int>>&dp){
        if (i==j) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        if (arr[i]<=arr[j]) return dp[i][j] = (j-i);
        else{
            return max(maxm(arr,i+1,j,dp),maxm(arr,i,j-1,dp));
        }
    }
    int maxIndexDiff(int A[], int N) 
    { 
        vector<vector<int>>dp(N+1,vector<int>(N+1, -1));
        return maxm(A,0,N-1,dp);
        // Your code here
    }
