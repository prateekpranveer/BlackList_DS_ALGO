vector <int> countDistinct (int A[], int n, int k) {
        vector<int>v;
        unordered_map<int,int>s;
        for (int i = 0; i<k; i++) {
            s[A[i]]++;
        }
        v.push_back(s.size());
        
        for (int i = k; i<n; i++) {
            s[A[i-k]]--;
            if (s[A[i-k]]==0) s.erase(A[i-k]);
            s[A[i]]++;
            v.push_back(s.size());
        }
        return v;
    }