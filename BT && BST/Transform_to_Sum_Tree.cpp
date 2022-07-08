int SumTree(Node * &root){
        if (root==NULL) return 0;
        int a = SumTree(root->left);
        int b = SumTree(root->right);
        int x = root->data;
        root->data = a+b;
        return root->data+x;
    }
    void toSumTree(Node *node) {
        SumTree(node);
    }