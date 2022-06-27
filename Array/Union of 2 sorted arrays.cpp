vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        map <int,int>ma;
        vector<int>v;
        
        for (int i = 0; i<n; i++){
            ma[arr1[i]] = 1;
        }
        
        for (int i = 0; i<m; i++){
            ma[arr2[i]] = 1;
        }
        
        for (auto x:ma){
            v.push_back(x.first);
        }
        
        return v;
        //Your code here
        //return vector with correct order of elements
    }