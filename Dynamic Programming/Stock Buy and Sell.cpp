vector<vector<int>> stockBuySell(vector<int> A, int n)
{
    vector<vector<int>> v;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i + 1] > A[i])
        {
            v.push_back({i, i + 1});
        }
    }
    return v;
}