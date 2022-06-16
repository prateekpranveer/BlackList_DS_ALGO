const int mod = 1e9 + 7;
int total(int n, int r, vector<vector<int>> &dp)
{
    if (r == 0)
        return 1;
    if (n == 0)
        return 0;
    if (dp[n][r] != -1)
        return dp[n][r];
    int a, b = 0;
    a = total(n - 1, r - 1, dp) % mod;
    b = total(n - 1, r, dp) % mod;

    return dp[n][r] = (a + b) % mod;
}

int nCr(int n, int r)
{
    vector<vector<int>> dp(n + 1, vector<int>(r + 1, -1));
    return total(n, r, dp);
}