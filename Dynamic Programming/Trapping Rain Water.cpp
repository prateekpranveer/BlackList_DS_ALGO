long long trappingWater(int arr[], int n)
{
    long long left[n];
    long long right[n];

    long long currMax = arr[0];
    long long currMax1 = arr[n - 1];

    for (long long i = 0; i < n; i++)
    {
        if (arr[i] > currMax)
            currMax = arr[i];
        left[i] = currMax;
    }

    for (long long i = n - 1; i >= 0; i--)
    {
        if (arr[i] > currMax1)
            currMax1 = arr[i];
        right[i] = currMax1;
    }

    long long total = 0;

    for (long long k = 0; k < n; k++)
    {
        total = total + (min(right[k], left[k]) - arr[k]);
    }

    return total;

    // code here
}