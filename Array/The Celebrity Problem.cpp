int celebrity(vector<vector<int>> &M, int n)
{
    int flag = 0;
    vector<int> known(n, 0);
    vector<int> knowing(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (M[i][j] == 1)
            {
                known[j]++;
                knowing[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (known[i] == n - 1 && knowing[i] == 0)
            return i;
    }

    return -1;
    // code here
}