/*
Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.
Example 1:

Input: n = 3, r = 2
Output: 3
Explaination: 3C2 = 3. 

Example 2:

Input: n = 2, r = 4
Output: 0
Explaination: r is greater than n.
*/

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