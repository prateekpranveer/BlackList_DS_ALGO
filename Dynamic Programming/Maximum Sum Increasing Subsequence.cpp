/*
Given an array of n positive integers. Find the sum of the maximum sum subsequence of the given array such that the integers in the subsequence are sorted in increasing order i.e. increasing subsequence. 
Example 1:

Input: N = 5, arr[] = {1, 101, 2, 3, 100} 
Output: 106
Explanation:The maximum sum of a
increasing sequence is obtained from
{1, 2, 3, 100}
Example 2:

Input: N = 3, arr[] = {1, 2, 3}
Output: 6
Explanation:The maximum sum of a
increasing sequence is obtained from
{1, 2, 3}
*/

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