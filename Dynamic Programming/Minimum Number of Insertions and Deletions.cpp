int dp[1004][1004];
int lcs(string str1, string str2, int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (str1[i] == str2[j])
        return dp[i][j] = 1 + lcs(str1, str2, i - 1, j - 1);
    return dp[i][j] = max(lcs(str1, str2, i - 1, j), lcs(str1, str2, i, j - 1));
}
int minOperations(string str1, string str2)
{
    memset(dp, -1, sizeof(dp));
    int i = str1.size() - 1;
    int j = str2.size() - 1;
    int del = abs(str1.size() - lcs(str1, str2, i, j));
    int app = abs(str2.size() - lcs(str1, str2, i, j));
    return del + app;
    // Your code goes here
}