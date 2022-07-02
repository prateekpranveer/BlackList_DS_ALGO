/*
There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does matter).
Example 1:

Input:
n = 4
Output: 5
Explanation:
You can reach 4th stair in 5 ways. 
Way 1: Climb 2 stairs at a time. 
Way 2: Climb 1 stair at a time.
Way 3: Climb 2 stairs, then 1 stair
and then 1 stair.
Way 4: Climb 1 stair, then 2 stairs
then 1 stair.
Way 5: Climb 1 stair, then 1 stair and
then 2 stairs.
*/

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