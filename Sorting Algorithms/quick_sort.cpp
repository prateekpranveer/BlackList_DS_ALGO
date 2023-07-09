    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if (low<high) {
            int pid = partition(arr, low, high);
            quickSort(arr, low, pid-1);
            quickSort(arr, pid+1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int i = low;
       int j = high;
       int pivot = arr[low];
       while (i<j) {
           while (arr[i]<=pivot && i<=high-1) {
               i++;
           }
           while (arr[j]>pivot && j>=low+1) {
               j--;
           }
           if (i<j) swap(arr[i], arr[j]);
       }
       swap(arr[low], arr[j]);
       return j;
    }