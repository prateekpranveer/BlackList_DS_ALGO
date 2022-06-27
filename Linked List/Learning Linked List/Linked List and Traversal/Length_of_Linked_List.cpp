int getCount(struct Node* head){
        int ct = 0;
        Node*curr = head;
        if (curr==NULL) return 0;
        while(curr!=NULL){
            curr = curr->next;
            ct++;
        }
        
        return ct;
        //Code here
    }