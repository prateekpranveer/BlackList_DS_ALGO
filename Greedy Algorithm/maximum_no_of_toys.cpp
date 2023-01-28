int toyCount(int n, int k, vector<int> arr)
    {
        sort(arr.begin(),arr.end());
        int  ct = 0;
        for (int i = 0; i<n; i++) {
            if (k>=arr[i]) {
                k = k-arr[i];
                ct++;
            }
        }
        return ct;
    }