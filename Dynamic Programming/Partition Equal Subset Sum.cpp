bool truePartition(int arr[], int i, int sum, vector<vector<int>> &dp)
{
    if (sum == 0)
        return true;
    if (dp[i][sum] != -1)
        return dp[i][sum];
    if (i == 0)
        return (arr[i] == sum);
    bool b = truePartition(arr, i - 1, sum, dp);
    if (sum > arr[i])
        b |= truePartition(arr, i - 1, sum - arr[i], dp);
    return dp[i][sum] = b;
}

int equalPartition(int N, int arr[])
{
    vector<vector<int>> dp(N + 1, vector<int>(100005, -1));
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + arr[i];
    }

    if (sum % 2 != 0)
        return false;
    else
        return truePartition(arr, N - 1, sum / 2, dp);
}