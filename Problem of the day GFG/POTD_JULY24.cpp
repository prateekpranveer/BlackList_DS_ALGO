int maxSum (Node * root){
        if (root==NULL) return 0;
        int a,b = 0;
        a = maxSum(root->left);
        b = maxSum(root->right);
        return max(a,b)+root->data;
    }
    int maxPathSum(Node* root)
    {
        return maxSum (root);
    }