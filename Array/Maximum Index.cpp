class Solution
{
public:
    int maxIndexDiff(int arr[], int N)
    {
        vector<int> lmin(N), rmax(N);
        lmin[0] = arr[0]; // storing all the minimum values from 0
        for (int i = 1; i < N; i++)
        {
            lmin[i] = min(arr[i], lmin[i - 1]);
        }
        rmax[N - 1] = arr[N - 1]; // storing all the maximum values from N-1
        for (int i = N - 2; i >= 0; i--)
        {
            rmax[i] = max(arr[i], rmax[i + 1]);
        }

        int i = 0, j = 0, ans = -1;
        while (i < N and j < N)
        {
            if (lmin[i] <= rmax[j])
            {
                ans = max(ans, j - i);
                j++;
            }
            else
                i++;
        }
        return ans;
    }
};