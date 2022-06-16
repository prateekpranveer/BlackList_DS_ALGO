int dp[1001][1001];

int longestCommon(int i1, int i2, string &s1, string &s2)
{
    if (i1 < 0 || i2 < 0)
        return 0;

    // matched
    if (dp[i1][i2] != -1)
        return dp[i1][i2];
    if (s1[i1] == s2[i2])
        return dp[i1][i2] = 1 + longestCommon(i1 - 1, i2 - 1, s1, s2);
    // not matched
    return dp[i1][i2] = max(longestCommon(i1 - 1, i2, s1, s2), longestCommon(i1, i2 - 1, s1, s2));
}
// Function to find the length of longest common subsequence in two strings.
int lcs(int x, int y, string s1, string s2)
{
    memset(dp, -1, sizeof(dp));
    int i1 = s1.size() - 1;
    int i2 = s2.size() - 1;

    return longestCommon(i1, i2, s1, s2);
    // your code here
}