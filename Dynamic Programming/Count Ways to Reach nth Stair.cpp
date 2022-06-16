int mod = 1e9 + 7;
long long dp[10004];
int helper(int i)
{
    if (i == 1)
        return 1;
    if (i == 2)
        return 2;
    if (i == 3)
        return 3;
    if (dp[i] != -1)
        return dp[i];
    return dp[i] = (helper(i - 1) % mod + helper(i - 2) % mod) % mod;
}
// Function to count number of ways to reach the nth stair.
int countWays(int n)
{
    memset(dp, -1, sizeof(dp));
    return helper(n);
    // your code here
}