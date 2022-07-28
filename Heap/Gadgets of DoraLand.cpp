vector<int> TopK(vector<int>& arr, int k)
    {
        vector<int>v;
        unordered_map <int,int>m;
        for (int i = 0; i<arr.size(); i++){
            if (m.find(arr[i])==m.end()) {
                m.insert({arr[i],1});
            }
            else{
                m[arr[i]]++;
            }
        }
        priority_queue<pair<int,int>>pq;
        for (auto x:m){
            pq.push({x.second, x.first});
        }
        while(k--){
            auto it = pq.top();
            v.push_back(it.second);
            pq.pop();
        }
        return v;
        
    }