bool hasPathSum(Node *root, int S) {
        if (!root) return root;
        S-=root->data;
        if (root->left == NULL && root->right==NULL) return S==0;
        return (hasPathSum(root->left, S)|hasPathSum(root->right, S));
    }