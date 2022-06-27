bool detectLoop(Node* head)
    {
        Node*slow = head;
        Node*fast = head;
        // while either of them becomes null
        // if loop doesn't exist, they will be null sometimes for sure
        // else the loop will exist
        while(fast && slow && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if (slow==fast) return true;
        }
        
        return false;
        // your code here
    }