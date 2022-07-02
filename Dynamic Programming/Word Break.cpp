/*
Given a string A and a dictionary of n words B, find out if A can be segmented into a space-separated sequence of dictionary words.

Note: From the dictionary B each word can be taken any number of times and in any order.
Example 1:

Input:
n = 12
B = { "i", "like", "sam",
"sung", "samsung", "mobile",
"ice","cream", "icecream",
"man", "go", "mango" }
A = "ilike"
Output:
1
Explanation:
The string can be segmented as "i like".

Example 2:

Input:
n = 12
B = { "i", "like", "sam",
"sung", "samsung", "mobile",
"ice","cream", "icecream", 
"man", "go", "mango" }
A = "ilikesamsung"
Output:
1
Explanation:
The string can be segmented as 
"i like samsung" or "i like sam sung".
*/

int wordBreak(string A, vector<string> &B)
{
    int n = A.size();
    int m = B.size();
    if (n == 0)
        return 1;

    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        string s = A.substr(0, i);
        for (int j = 0; j < m; j++)
        {
            if (s.compare(B[j]) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1 && wordBreak(A.substr(i, n - i), B) == 1)
            return 1;
    }
    return 0;
}