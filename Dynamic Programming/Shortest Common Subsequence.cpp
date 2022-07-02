/*
Given two strings X and Y of lengths m and n respectively, find the length of the smallest string which has both, X and Y as its sub-sequences.
Note: X and Y can have both uppercase and lowercase letters.

Example 1

Input:
X = abcd, Y = xycd
Output: 6
Explanation: Shortest Common Supersequence
would be abxycd which is of length 6 and
has both the strings as its subsequences.
Example 2

Input:
X = efgh, Y = jghi
Output: 6
Explanation: Shortest Common Supersequence
would be ejfghi which is of length 6 and
has both the strings as its subsequences.
*/

int dp[101][101];
int lcs(string s1, string s2, int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (s1[i] == s2[j])
    {
        return dp[i][j] = 1 + lcs(s1, s2, i - 1, j - 1);
    }
    return dp[i][j] = max(lcs(s1, s2, i - 1, j), lcs(s1, s2, i, j - 1));
}
// Function to find length of shortest common supersequence of two strings.
int shortestCommonSupersequence(string X, string Y, int m, int n)
{
    memset(dp, -1, sizeof(dp));
    return ((m + n) - lcs(X, Y, m - 1, n - 1));
    // code here
}