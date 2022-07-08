int x = INT_MAX;
    void minD(Node * root, int K){
        if (root==NULL) return;
        x = min(x,abs(root->data-K));
        if (root->right) minD(root->right,K);
        if (root->left) minD(root->left,K);
    }

    int minDiff(Node *root, int K)
    {
       minD(root,K);
       return x;
    }