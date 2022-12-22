class Solution {
  public:
  
    // int minimum (int i, vector<int>&height, vector<int>&dp) {
    //     if (i<=0) return 0;
    //     if (i==1) return abs(height[1]-height[0]);
    //     if (dp[i]!=-1) return dp[i];
    //     int a = abs(height[i]-height[i-1]) + minimum(i-1, height,dp);
    //     int b = INT_MAX;
    //     if (i>1)
    //         b = abs(height[i]-height[i-2]) +minimum(i-2, height,dp);
    //     return dp[i] = min(a,b);
    // }
  
    int minimumEnergy(vector<int>& height, int n) {
        int prev = 0;
        int prev1 = INT_MAX;
        int r = INT_MAX;
        int curr = INT_MAX;
        for (int i = 1; i<n; i++) {
                int l = prev + abs (height[i]-height[i-1]);
                if (i>1) r = prev1 + abs(height[i]-height[i-2]);
                curr = min(r,l);
                prev1 = prev;
                prev = curr;
        }
        return prev;
    }
};