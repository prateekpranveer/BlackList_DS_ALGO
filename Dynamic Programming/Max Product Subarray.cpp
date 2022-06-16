// Function to find maximum product subarray
long long maxProduct(vector<int> arr, int n)
{
    if (n == 1)
        return arr[0];
    long long curr_prod = 1;
    long long max_prod = 1;

    for (int i = 0; i < n; i++)
    {
        curr_prod = curr_prod * arr[i];
        max_prod = max(max_prod, curr_prod);
        if (arr[i] == 0)
            curr_prod = 1;
    }

    curr_prod = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        curr_prod *= arr[i];
        max_prod = max(max_prod, curr_prod);
        if (arr[i] == 0)
        {
            curr_prod = 1;
        }
    }

    return max_prod;
    // code here
}