Node *removeDuplicates(Node *head)
{
    Node * temp = head;
    while(temp && temp->next){
        if (temp->data == temp->next->data){
            Node * toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}