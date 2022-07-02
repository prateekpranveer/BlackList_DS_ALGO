/*
Given an integer N denoting the Length of a line segment. You need to cut the line segment in such a way that the cut length of a line segment each time is either x , y or z. Here x, y, and z are integers.
After performing all the cut operations, your total number of cut segments must be maximum.

Example 1:

Input:
N = 4
x = 2, y = 1, z = 1
Output: 4
Explanation:Total length is 4, and the cut
lengths are 2, 1 and 1.  We can make
maximum 4 segments each of length 1.
Example 2:

Input:
N = 5
x = 5, y = 3, z = 2
Output: 2
Explanation: Here total length is 5, and
the cut lengths are 5, 3 and 2. We can
make two segments of lengths 3 and 2.
*/

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