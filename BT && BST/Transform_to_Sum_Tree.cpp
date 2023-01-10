int transform(Node * root) {
        if (root==NULL) return 0;
        int a = transform(root->left);
        int b = transform(root->right);
        int d = root->data;
        root->data = a+b;
        return (a+b+d);
    }
    void toSumTree(Node *node)
    {
        transform(node);
    }