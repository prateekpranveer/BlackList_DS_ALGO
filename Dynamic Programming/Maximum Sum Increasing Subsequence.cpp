int dp[1009][1009];
int f(int arr[], int i, int j, int n, int dp[1009][1009])
{
    int take = 0, nottake = 0;
    if (j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (i == n || arr[i] > arr[j])
        consider = arr[j] + f(arr, j, j - 1, n, dp);
    notConsider = f(arr, i, j - 1, n, dp);
    return dp[i][j] = max(consider, notConsider);
}
int maxSumIS(int arr[], int n)
{
    // Your code goes here
    memset(dp, -1, sizeof(dp));
    return f(arr, n, n - 1, n, dp);
}