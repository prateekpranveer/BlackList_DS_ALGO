int firstRepeated(int arr[], int n) {
        unordered_map <int,int> um;
        for (int i = 0; i<n; i++){
            um[arr[i]]++;
        }
        
        for (int i = 0; i<n; i++){
            if (um.find(arr[i])!= um.end() && um.find(arr[i])->second >= 2){
                return i+1;
            }
        }
        
        return -1;
    }