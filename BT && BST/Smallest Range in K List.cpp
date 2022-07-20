struct e{
        public:
        int  val;
        int id;
        int appearence;
    
        e(int a, int b, int c){
            val = a;
            id = b;
            appearence = c;
        }
    };
    
    struct comp{
       bool operator()(e&a, e&b){
           return a.val > b.val;
       }
   };
   
    
    pair<int,int> findSmallestRange(int arr[][N], int n, int k)
    {
        int minElement = 0;
        int maxElement = -100000;
        priority_queue<e,vector<e>,comp>pq;
        for (int i = 0; i<k; i++){
             maxElement = max(maxElement, arr[i][0]);
             pq.push(e(arr[i][0],0,i));
         }
         pair<int,int>flying_range = {minElement, maxElement};
         
         while(!pq.empty()){
             e m = pq.top();
             minElement = m.val;
             pq.pop();
             if (flying_range.second-flying_range.first>maxElement-minElement){
                 flying_range = {minElement, maxElement};
             }
            if (m.id+1<n){
                m.val = arr[m.appearence][m.id+1];
                maxElement = max(maxElement, arr[m.appearence][m.id+1]);
                m.id++;
                pq.push(m);
            }
    
            else break;
         }

         return flying_range;
    }