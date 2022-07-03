int getNthFromLast(Node *head, int n)
{
    Node * temp = head;
    int ct = 0;
    while(temp){
        temp = temp->next;
        ct++;
    }
    
    if (n>ct) return -1;
    int frombegin = ct-n;
    Node * mainptr = head;
    while(frombegin--){
        mainptr = mainptr->next;
    }
    
    return mainptr->data;
       // Your code here
}