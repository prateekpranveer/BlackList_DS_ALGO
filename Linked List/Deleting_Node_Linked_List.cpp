#include <bits/stdc++.h>
using namespace std;

// Contruct a Node
class Node {
public:
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

void deleteNode(Node * head, int key){
    Node * temp = head;
    if (temp!=NULL && temp->data = key){
        // If head pointer has the key, then make head to next of temp and successfully detach the temp.
        head = temp->next;
        delete temp;
        return;
    }
    // Initialize a prev pointer to point at the previous element of the lement that needs to be deleted.
    Node * prev= NULL;
    // Iterating over the Linked list
    while (temp!=NULL  && temp->data = key){
        // Keeping record of the previous
        prev = temp;
        temp = temp->next;
    }
    // If the key not present in the linked list
    if (temp == NULL) return;
    // Unlinking the Node
    prev->next = temp->next;
    // Deleting the Node
    delete temp;

}