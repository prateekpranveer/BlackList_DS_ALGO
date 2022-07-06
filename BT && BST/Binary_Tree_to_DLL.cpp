void convert(Node * root, Node *&a, Node *&b){
        
        if (!a) {
            a = root;
            b = root;
        }
        else {
            b->right = root;
            root->left = b;
            b = root;
        }
        
        return;
    }
    
    void traverse(Node*root, Node *&a, Node *&b){
        if (root==NULL) return;
        traverse(root->left, a,b);
        convert(root,a,b);
        traverse(root->right,a,b);
    }
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        Node * a = NULL;
        Node * b = NULL;
        traverse(root, a,b);
        return a;
    }
