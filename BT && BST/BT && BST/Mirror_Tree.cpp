    void swap(Node*&a, Node*&b){
        Node*temp;
        temp = a;
        a = b;
        b = temp;
    }
    
    void mirror(Node* node) {
        if (node==NULL) return;
        mirror(node->left);
        mirror(node->right);
        swap(node->left,node->right);
    }