int dp[101][10001];
bool possible(vector<int> arr, int i, int sum)
{
    if (sum == 0)
        return true;
    if (i == 0)
        return (arr[i] == sum);
    if (i < 0)
        return false;
    if (dp[i][sum] != -1)
        return dp[i][sum];
    int a, b = 0;
    a = possible(arr, i - 1, sum);
    if (sum > arr[i])
    {
        b = possible(arr, i - 1, sum - arr[i]);
    }
    return dp[i][sum] = a | b;
}
bool isSubsetSum(vector<int> arr, int sum)
{
    memset(dp, -1, sizeof(dp));
    int n = arr.size();
    return possible(arr, n - 1, sum);
}