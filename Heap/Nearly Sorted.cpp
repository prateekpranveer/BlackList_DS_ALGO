vector <int> nearlySorted(int arr[], int num, int K){
        vector<int>v;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i<num; i++){
            pq.push(arr[i]);
        }
        
        while(!pq.empty()){
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
    }