void helper(Node * root, int &v){
        if (root==NULL) return;
        helper(root->right, v);
        int x = root->data;
        root->data = v;
        v+=x;
        helper(root->left,v);
    }
    void transformTree(struct Node *root)
    {
        int v = 0;
        helper(root,v);
    }