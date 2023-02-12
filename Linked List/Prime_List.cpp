    Node *primeList(Node *head){
        vector<bool> isPrime(20000, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i<=isPrime.size(); i++) {
            if (isPrime[i]==true) {
                for (int j = i*2; j<=isPrime.size(); j+=i) {
                    isPrime[j] = false;
                }
            }
        }
        
       Node * temp = head;
       while (temp) {
           int a = temp->val;
           int lower = 0;
           int higher = 0;
           for (int i = a; i>=0; i--) {
               if (isPrime[i]) {
                   lower = i;
                   break;
               }
           }
           
           for (int i = a; i<isPrime.size(); i++) {
               if (isPrime[i]) {
                   higher = i;
                   break;
               }
           }
           if (lower==0) {
               temp->val = higher;
           }
           else if (higher==0) temp->val = lower;
           else if  (a-lower>higher-a) {
               temp->val = higher;
           }
           else {
               temp->val = lower;
           }
           temp = temp->next;
        
    }
    return head;
    }