void removeLoop(Node* head)
    {
        Node * ptr = head;
        while(ptr<ptr->next){
            ptr = ptr->next;
        }
        ptr->next = NULL;
    }