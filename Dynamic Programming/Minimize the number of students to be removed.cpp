
//DP + recursion giving TLE at 100000 size array

// int pushStudents (int H[], int n, int i, int prev, vector<vector<int>>&dp) {
    //     if (i==n) return 0;
    //     //take case
    //     int a,b = 0;
    //     if (dp[i][prev+1]!=-1) return dp[i][prev+1];
    //     b = pushStudents(H,n,i+1,prev,dp);
    //     if (prev==-1 || H[i]>H[prev]) {
    //       b = max(b,1+pushStudents(H,n,i+1,i,dp)); 
    //     }
    //     return dp[i][prev+1] = b;
        
    // }
    
    int removeStudents(int arr[], int n) {

        // vector<vector<int>>dp(N, vector<int>(N, -1));
        // int lis = pushStudents(H, N,0,-1,dp);
        // return N-lis;

        vector<int>v;
        for (int i = 0; i<n; i++) {
            if (v.empty() || arr[i]>v.back()) {
                v.push_back(arr[i]);
            } 
            else {
                auto it = lower_bound(v.begin(), v.end(),arr[i]);
                int pos = it-v.begin();
                v[pos] = arr[i];
            }
        }
        return n - v.size();
    }