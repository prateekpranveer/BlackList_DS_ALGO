vector<int> maximizeArray(int arr1[], int arr2[], int n) {
        int l = n;
            vector<pair<int,int>>v;
            priority_queue<pair<int,int>>pq;
            for (int i = 0; i<n; i++){
                v.push_back({arr2[i],i});
            }
            for (int i = 0; i<n; i++){
                v.push_back({arr1[i],i+n});
            }
            unordered_map<int,int>um;
            for (int i = 0; i<v.size(); i++){
                if (um.find(v[i].first)==um.end()){
                    um[v[i].first] = v[i].second;
                }
            }
            for (auto it = um.begin(); it!=um.end(); it++){
                pq.push({it->first, it->second});
            }
            map<int,int>m;
            
            while(l--){
                auto pr = pq.top();
                pq.pop();
                m[pr.second] = pr.first;
            }
            vector<int>ans;
            for (auto x:m){
                ans.push_back(x.second);
            }
            return ans;
    }