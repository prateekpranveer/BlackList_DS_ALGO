const int mod = 1e9 + 7;
int count(int arr[], int i, int n, int sum, vector<vector<int>> &dp)
{
    if (sum == 0)
    {
        if (i == n - 1 && arr[i] == 0)
            return 2;
        else
            return 1;
    };
    if (i >= n)
        return 0;
    if (dp[i][sum] != -1)
        return dp[i][sum];
    int a, b = 0;
    a = count(arr, i + 1, n, sum, dp) % mod;
    if (sum >= arr[i])
        b = count(arr, i + 1, n, sum - arr[i], dp) % mod;
    return dp[i][sum] = (a + b) % mod;
}
int perfectSum(int arr[], int n, int sum)
{
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
    return count(arr, 0, n, sum, dp);
    // Your code goes here
}