/*
Given two strings 'str' and a wildcard pattern 'pattern' of length N and M respectively,  You have to print '1' if the wildcard pattern is matched with str else print '0' .

The wildcard pattern can include the characters ‘?’ and ‘*’
‘?’ – matches any single character
‘*’ – Matches any sequence of characters (including the empty sequence)

Note: The matching should cover the entire str (not partial str).

 

Example 1:

Input:
pattern = "ba*a?"
str = "baaabab"
Output: 1
Explanation: replace '*' with "aab" and 
'?' with 'b'. 
Example 2:

Input:
pattern = "a*ab"
str = "baaabab"
Output: 0
Explanation: Because of'a' at first position,
pattern and str can't be matched. 
*/

bool match(string pattern, string str, int i, int j, vector<vector<int>> &dp)
{
    if (i < 0 && j < 0)
        return 1;
    if (i < 0 && j >= 0)
        return 0;
    if (i >= 0 && j < 0)
    {
        for (int x = 0; x <= i; x++)
        {
            if (pattern[x] != '*')
                return false;
        }
        return true;
    }

    if (dp[i][j] != -1)
        return dp[i][j];
    // its a match
    if (pattern[i] == str[j] || pattern[i] == '?')
        return dp[i][j] = match(pattern, str, i - 1, j - 1, dp);
    else if (pattern[i] == '*')
        return dp[i][j] = match(pattern, str, i - 1, j, dp) | match(pattern, str, i, j - 1, dp);

    return dp[i][j] = false;
}

int wildCard(string pattern, string str)
{
    vector<vector<int>> dp(pattern.size() + 1, vector<int>(str.size() + 1, -1));
    return match(pattern, str, pattern.size() - 1, str.size() - 1, dp);
}