    bool findTriplets(int arr[], int n)
    { 
        int sum = 0;
        bool flag = false;
        unordered_map<int,int>um;
        for (int i = 0; i<n; i++) {
            um.insert({arr[i],i});
        }
        
        for (int i = 0; i<n; i++) {
            for (int j = i+1; j<n; j++) {
                if (um.find(0-(arr[i]+arr[j]))!=um.end() && um[0-(arr[i] +arr[j])]!=i && um[0-(arr[i] +arr[j])]!=j) {
                    flag = true;
                }            
                
            }
        }
        return flag;
    }