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


// Time Complexity of this insertion is O(n) since it depends on n which is the size of the linked list.

// Space complexity of this insertion is O(1) since we have used the constant space to modify the pointers

void insertAfter(Node*prev_node, int val){
    // Create a new node
    Node*n = new Node(val);
    if (prev_node == NULL){
        return;
    }
    // Make next of new node as next of previous node
    n->next = prev_node->next;
    // Make next of previous node as n
    prev_node->next = n;

}

void insertAtTail(Node *&head, int val) {
    // Create a new node with the constructor
    Node *n = new Node(val);
    // If the head itself is NULL, directly make head as new node and return
    if (head == NULL) {
        head = n;
        return;
    }
    // If head is not NULL, then traverse the Linked list until the tail is found. i.e, pointer that has been used for traversing tends to NULL.
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // Now the asssigned pointer has reached the tail, so assign the new node to the next of pointer
    temp->next = n;
}

void insertAtHead(Node *&head, int val) {
    // Create a new node
    Node *n = new Node(val);
    // If head is NULL, initialize the linked list with new node
    if (head == NULL) {
        head = n;
    }
    // Assign head to the next of new node
    n->next = head;
    // Make the new node as head
    head = n;
}


