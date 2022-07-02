/*
Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same.
Example 1:

Input: N = 4
arr = {1, 5, 11, 5}
Output: YES
Explanation: 
The two parts are {1, 5, 5} and {11}.
Example 2:

Input: N = 3
arr = {1, 3, 5}
Output: NO
Explanation: This array can never be 
partitioned into two such parts.
*/

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