int findFirstNode(Node* head)
    {
        Node * temp1 = head;
        Node * temp2 = head;
        
        while (temp2 && temp2->next) {
            temp1 = temp1->next;
            temp2 = temp2->next->next;
            if (temp1==temp2) {
                temp1 = head;
                while(temp1!=temp2) {
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
                return temp2->data;
            }
        }
        return -1;
        // your code here
    }