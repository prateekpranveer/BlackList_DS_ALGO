int dp[1006][1005];
int contain(int W, int wt[], int val[], int i)
{
    if (W == 0)
        return 0;
    if (i < 0)
        return 0;
    if (dp[W][i] != -1)
        return dp[W][i];
    int val1 = 0;
    if (W >= wt[i])
        val1 = val[i] + contain(W - wt[i], wt, val, i - 1);
    int val2 = max(val1, contain(W, wt, val, i - 1));

    return dp[W][i] = val2;
}
// Function to return max value that can be put in knapsack of capacity W.
int knapSack(int W, int wt[], int val[], int n)
{
    memset(dp, -1, sizeof(dp));
    int i = n - 1;
    return contain(W, wt, val, i);

    // Your code here
}