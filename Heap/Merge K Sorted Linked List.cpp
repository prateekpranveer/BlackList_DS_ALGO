Node * mergeKLists(Node *arr[], int K)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i<K; i++){
            Node * temp = arr[i];
            while(temp!=NULL){
                pq.push(temp->data);
                temp = temp->next;
            }
        }
        
        Node * newNode = new Node(pq.top());
        pq.pop();
        Node * curr = newNode;
        while(!pq.empty()){
            Node * toAttach = new Node(pq.top());
            pq.pop();
            curr->next = toAttach;
            curr = curr->next;
        }
        
        return newNode;
    }