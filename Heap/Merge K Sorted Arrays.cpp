vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int>v;
        priority_queue<int>pq;
        for (auto x:arr){
            for(auto y:x){
                pq.push(y);
            }
        }
        
        while(!pq.empty()){
            v.push_back(pq.top());
            pq.pop();
        }
        
        reverse(v.begin(),v.end());
        return v;
    }