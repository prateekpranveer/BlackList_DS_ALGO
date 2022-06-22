void merge(int arr[], int l, int mid, int r)
{
    int merged[r - l + 1];
    int ind1 = l;
    int ind2 = mid + 1;
    int x = 0;

    while (ind1 <= mid && ind2 <= r)
    {
        if (arr[ind1] < arr[ind2])
        {
            merged[x] = arr[ind1];
            ind1++;
        }
        else
        {
            merged[x] = arr[ind2];
            ind2++;
        }
        x++;
    }

    while (ind1 <= mid)
    {
        merged[x] = arr[ind1];
        x++;
        ind1++;
    }

    while (ind2 <= r)
    {
        merged[x] = arr[ind2];
        x++;
        ind2++;
    }

    for (int i = l; i <= r; i++)
    {
        arr[i] = merged[i - l];
    }

    return;
}
void divide(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    divide(arr, l, mid);
    divide(arr, mid + 1, r);
    merge(arr, l, mid, r);
    // Your code here
}

public:
void mergeSort(int arr[], int l, int r)
{
    divide(arr, l, r);
    // code here
}