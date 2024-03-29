Node* lca(Node* root ,int n1 ,int n2 ) {
        if (root==NULL) return root;
        if (root->data==n1||root->data==n2) return root;
        Node * l = lca(root->left, n1,n2);
        Node * r = lca(root->right, n1,n2);
        if (l&& r) return root;
        if (l && !r) return l;
        if (r && !l) return r;
        else return NULL;

    }