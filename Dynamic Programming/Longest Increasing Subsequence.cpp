int longest(int a[], int i, int prev, int n, vector<vector<int>> &dp)
{
    if (i == n)
        return 0;
    int x = longest(a, i + 1, prev, n, dp);
    if (dp[i][prev + 1] != -1)
        return dp[i][prev + 1];
    if (prev == -1 || a[prev] < a[i])
        x = max(x, 1 + longest(a, i + 1, i, n, dp));
    return dp[i][prev + 1] = x;
}
// Function to find length of longest increasing subsequence.
int longestSubsequence(int n, int a[])
{
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    int i = 0;
    int prev = -1;
    return longest(a, i, prev, n, dp);
    // your code here
}