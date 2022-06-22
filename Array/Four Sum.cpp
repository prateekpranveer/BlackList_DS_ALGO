vector<vector<int>> fourSum(vector<int> &arr, int m)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    set<vector<int>> sv;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int temp = m - (arr[i] + arr[j] + arr[k]);
                if (binary_search(arr.begin() + k + 1, arr.end(), temp))
                {
                    vector<int> v;
                    v.push_back(arr[i]);
                    v.push_back(arr[j]);
                    v.push_back(arr[k]);
                    v.push_back(temp);

                    sort(v.begin(), v.end());
                    sv.insert(v);
                }
            }
        }
    }
    vector<vector<int>> ans(sv.begin(), sv.end());
    return ans;
}
