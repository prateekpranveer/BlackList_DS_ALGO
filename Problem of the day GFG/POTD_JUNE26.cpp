// Giving TLE
// Needs Optimization

int countDistinctSubarray(int arr[], int n)
    {
        map <int,int>m;
        for (int i = 0; i<n; i++){
            m[arr[i]]++;
        }
        int msize = m.size();
        int ct = 0;

        
        for (int i = 0; i<n; i++){
            unordered_map<int,int>um;
            for (int j = i;j<n;j++){
                um.insert({arr[j],j});
                if (um.size() == msize){
                    ct+=n-j;
                    break;
                }
            }
        }
        
        
        return ct;
        
        //code here.
    }
