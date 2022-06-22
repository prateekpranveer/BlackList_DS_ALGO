
int circularSubarraySum(int arr[], int num)
{
    // kadene for maximum
    int maxSum = arr[0];
    int curr_sum = 0;
    int total = 0;

    for (int i = 0; i < num; i++)
    {
        curr_sum = max(arr[i], curr_sum + arr[i]);
        total = total + arr[i];
        maxSum = max(curr_sum, maxSum);
    }

    int minSum = arr[0];
    int curr_min = 0;

    for (int i = 0; i < num; i++)
    {
        curr_min = min(arr[i], curr_min + arr[i]);
        minSum = min(minSum, curr_min);
    }

    if (maxSum > 0)
        return max(maxSum, total - minSum);
    else
        return maxSum;

    // your code here
}
