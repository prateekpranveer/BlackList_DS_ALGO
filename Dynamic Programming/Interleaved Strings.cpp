bool isPossible(string A, string B, string C, int a, int b, int c, vector<vector<int>> &dp)
{
    if (c == 0)
        return (a == 0 && b == 0);
    if (dp[a][b] != -1)
        return dp[a][b];
    bool x, y = false;
    if (a >= 0 && A[a - 1] == C[c - 1])
        x = isPossible(A, B, C, a - 1, b, c - 1, dp);
    if (b >= 0 && B[b - 1] == C[c - 1])
        y = isPossible(A, B, C, a, b - 1, c - 1, dp);
    return dp[a][b] = x or y;
}
/*You are required to complete this method */
bool isInterleave(string A, string B, string C)
{
    int a = A.size();
    int b = B.size();
    int c = C.size();
    vector<vector<int>> dp(a + 2, vector<int>(b + 2, -1));
    return isPossible(A, B, C, a, b, c, dp);
    // Your code here
}