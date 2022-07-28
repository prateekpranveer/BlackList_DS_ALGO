vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        vector<int>v;
        priority_queue<pair<int,int>>pq;
        for (int i = 0; i<n; i++){
            int dist = abs(arr[i]-x);
            pq.push({dist, arr[i]});
            if (pq.size()>k){
                pq.pop();
            }
        }
        while(k--){
            auto it = pq.top();
            pq.pop();
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        return v;
    } 