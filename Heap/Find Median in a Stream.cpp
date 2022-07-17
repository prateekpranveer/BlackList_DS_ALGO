priority_queue<int>maxHeap;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    void insertHeap(int &x)
    {
        if (maxHeap.size()==0){
            maxHeap.push(x);
        }
        else if (minHeap.size()==0){
            minHeap.push(x);
        }
        else{
            if (maxHeap.top()<x) minHeap.push(x);
            else{
                maxHeap.push(x);
            }
        }
        
    }
    void balanceHeaps()
    {
        while(maxHeap.size()+1<minHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        while(maxHeap.size()>minHeap.size()){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        balanceHeaps();
        double x = 0;
        if (maxHeap.size()+minHeap.size()==0) return x;
        if ((maxHeap.size()+minHeap.size())%2==0){
            x = (maxHeap.top() + minHeap.top())/2;
        }
        else{
            x = minHeap.top();
        }
        return x;
        
    }