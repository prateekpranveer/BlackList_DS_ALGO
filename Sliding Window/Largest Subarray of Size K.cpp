int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        int maxSize = 0;
        unordered_map<int,int>um;
        int sum = 0;
        um[0] = -1;
        for (int i = 0; i<n; i++){
            sum = sum+arr[i];
            if (um.find(sum-k)!=um.end()){
                maxSize = max(maxSize, i-um[sum-k]);
            }
            um.insert({sum,i});
        }
        return maxSize;
    }