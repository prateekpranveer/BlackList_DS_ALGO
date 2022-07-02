/*
Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 


Example 1:

Input:
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 9
Output: 1 
Explanation: Here there exists a subset with
sum = 9, 4+3+2 = 9.
Example 2:

Input:
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 30
Output: 0 
Explanation: There is no subset with sum 30.
*/

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