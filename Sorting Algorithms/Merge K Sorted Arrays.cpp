vector<int> merge(vector<int> &a, vector<int> &b)
{
    vector<int> merged(a.size() + b.size());
    int idx1 = 0;
    int idx2 = 0;
    int x = 0;

    while (idx1 < a.size() && idx2 < b.size())
    {
        if (a[idx1] < b[idx2])
        {
            merged[x++] = a[idx1++];
        }
        else
        {
            merged[x++] = a[idx2++];
        }
    }

    while (idx1 < a.size())
    {
        merged[x] = a[idx1];
    }
    while (idx2 < b.size())
    {
        merged[x] = b[idx2];
    }

    return merged;
}

vector<int> MergeAll(vector<vector<int>> &arr, int i, int j, int k)
{
    if (j == k)
        return merge(arr[i], arr[j]);
    return MergeAll(arr, i + 1, j + 1, k);
}

// Function to merge k sorted arrays.
vector<int> mergeKArrays(vector<vector<int>> arr, int K)
{
    return MergeAll(arr, 0, 1, K);
    // code here
}