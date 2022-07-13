void swap(int &a, int &b){
        int temp;
        temp = a; a = b; b = temp;
    }
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        int m = i;
        int l = 2*i+1;
        int r = 2*i+2;
        
        if (l<n && arr[l]>arr[m]){
            m = l;
        }
        
        if (r<n && arr[r]>arr[m]){
            m = r;
        }
        
        if (m!=i){
            swap(arr[m], arr[i]);
            heapify(arr,n,m);
        }
      // Your Code Here
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for (int i = n-1; i>=0; i--){
            heapify(arr,n,i);
        }
    // Your Code Here
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        for (int i = n-1; i>=0; i--){
            swap(arr[0], arr[i]);
            // heapifying to keep max at 0th position of the array so that it can be swapped with ith last element
            heapify(arr,i,0);
        }
        //code here
    }