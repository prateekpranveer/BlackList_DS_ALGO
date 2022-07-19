int maxEvents(int start[], int end[], int N) {
        unordered_set<int>s;
        priority_queue<pair<int,int>>pq;
        for (int i = 0; i<N; i++){
            pq.push({start[i],end[i]});
        }
        int ct = 0;
        while (pq.size()>0){
            auto v = pq.top();
            pq.pop();
            // if the end date is not booked in set
            if (s.find(v.second)==s.end()){
                //book end date in the set
                s.insert(v.second);
            }
            //if end date is booked in the set
            else{
                //find the date before end date that is not booked
                int ele = v.second;
                while(ele>=v.first){
                    //if any date before that is not booked, book it;
                    if (s.find(ele)==s.end()){
                        s.insert(ele);
                        break;
                    }
                    ele--;
                }
            }
         }
         //the final size of set will return all the dates booked.
        return s.size();
    }