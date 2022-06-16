int dp[10005];
int cut(int n, int x, int y, int z)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int ct1 = INT_MIN, ct2 = INT_MIN, ct3 = INT_MIN;
    if (n >= x)
        ct1 = cut(n - x, x, y, z);
    if (n >= y)
        ct2 = cut(n - y, x, y, z);
    if (n >= z)
        ct3 = cut(n - z, x, y, z);

    return dp[n] = 1 + max(ct1, max(ct2, ct3));
}
// Function to find the maximum number of cuts.
int maximizeTheCuts(int n, int x, int y, int z)
{
    memset(dp, -1, sizeof(dp));
    return cut(n, x, y, z) < 0 ? 0 : cut(n, x, y, z);

    // Your code here
}