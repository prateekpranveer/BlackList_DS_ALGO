    int ct = 0;
    void count(Node * root, int l, int r){
        if (root==NULL) return;
        if (root->data>=l && root->data<=r) ct++;
        if (root->left) count(root->left, l,r);
        if (root->right) count(root->right, l,r);
    }

    int getCount(Node *root, int l, int h) {
        count(root,l,h);
        return ct;  
    }