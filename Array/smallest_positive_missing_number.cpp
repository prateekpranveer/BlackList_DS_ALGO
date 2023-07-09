    int missingNumber(int arr[], int n) 
    {
        vector<int>ar;
        set<int>s;
        vector<int>v;
        vector<int>vn;
        for (int i = 0; i<n; i++) {
            s.insert(arr[i]);
        }
        for (auto x:s) {
            ar.push_back(x);
        }
        
        for (int i = 0; i<n; i++) {
            if (ar[i]>=0) v.push_back(ar[i]);
        }
        
        if (v.size()==0) return 1;
        if (v[0]!=0) {
            vn.push_back(0);
        }
        for (auto x: v) {
            vn.push_back(x);
        }
        vn.push_back(INT_MAX);
        for (int i = 0; i<vn.size(); i++) {
            if (vn[i]!=i) return i;
        }
    }