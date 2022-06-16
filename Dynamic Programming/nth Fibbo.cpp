int dp[10005];
const int mod = 1e9 + 7;
long long helper(long long i)
{
    if (i == 0)
        return 1;
    if (i == 1)
        return 1;

    if (dp[i] != -1)
        return dp[i];

    return dp[i] = (helper(i - 1) % mod + helper(i - 2) % mod);
}
long long int nthFibonacci(long long int n)
{
    memset(dp, -1, sizeof(dp));
    return helper(n - 1) % mod;
}