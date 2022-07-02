Node * reverse(Node *head){
        if (head == NULL || head->next == NULL) return head;
        Node * final_head = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return final_head;
    }
    //Function to reverse a linked list.
struct Node * reverseList(struct Node * head){
    return reverse(head);
}