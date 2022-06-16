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