long long minCost(long long arr[], long long n) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for (int i = 0; i<n; i++){
            pq.push(arr[i]);
        }
        long long m =0;
        long long size = n;
        while(size>1){
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            long long total = x+y;
            m +=total;
            pq.push(total);
            size--;
        }
        return m;
    }