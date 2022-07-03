// Find the longer Linked list
int getCount(Node*head){
    int ct = 0;
    while(head->next!=NULL){
        head = head->next;
        ct++;
    }
    return ct;
}

// Find the intersection with the help of hashmap
int intersection(Node*head1, Node*head2){
    unordered_map<Node*,int>um;
    Node * temp = head1;
    Node * found;
    while(temp!=NULL){
        um.insert({temp,temp->data});
        temp = temp->next;
    }
    
    
    Node * temp2 = head2;
    while(temp2!=NULL){
        if (um.find(temp2)!=um.end()){
            found = temp2;
            break;
        }
        temp2 = temp2->next;
    }
    
    return found->data;
}

// condition for shorter Linked list to traverse first so that less time is aquired when we break the loop while traversing the second loop.
int intersectPoint(Node* head1, Node* head2)
{
    int a = getCount(head1);
    int b = getCount(head2);
    
    if (a>b){
        return intersection(head2, head1);
    }
    
    else{
        return intersection(head1, head2);
    }
}