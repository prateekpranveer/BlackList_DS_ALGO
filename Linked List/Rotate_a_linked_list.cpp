Node* rotate(Node* head, int k)
    {
        Node * toBreak = head;
        Node * temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = head;
        k = k-1;
        while(k--){
            toBreak = toBreak->next;
        }
        Node * newHead = toBreak->next;
        toBreak->next = NULL;

        return newHead;
        // Your code here
    }