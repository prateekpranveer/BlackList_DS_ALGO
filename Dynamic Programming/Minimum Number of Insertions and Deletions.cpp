/*
Given two strings str1 and str2. The task is to remove or insert the minimum number of characters from/in str1 so as to transform it into str2. It could be possible that the same character needs to be removed/deleted from one point of str1 and inserted to some another point.
Example 1:

Input: str1 = "heap", str2 = "pea"
Output: 3
Explanation: 2 deletions and 1 insertion
p and h deleted from heap. Then, p is 
inserted at the beginning One thing to 
note, though p was required yet it was 
removed/deleted first from its position 
and then it is inserted to some other 
position. Thus, p contributes one to the 
deletion_count and one to the 
insertion_count.
*/

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