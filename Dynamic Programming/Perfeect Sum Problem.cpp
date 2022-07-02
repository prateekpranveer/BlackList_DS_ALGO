/*
Given an array arr[] of non-negative integers and an integer sum, the task is to count all subsets of the given array with a sum equal to a given sum.

Note: Answer can be very large, so, output answer modulo 109+7

Example 1:

Input: N = 6, arr[] = {2, 3, 5, 6, 8, 10}
       sum = 10
Output: 3
Explanation: {2, 3, 5}, {2, 8}, {10}
Example 2:
Input: N = 5, arr[] = {1, 2, 3, 4, 5}
       sum = 10
Output: 3
Explanation: {1, 2, 3, 4}, {1, 4, 5}, 
             {2, 3, 5}
*/

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