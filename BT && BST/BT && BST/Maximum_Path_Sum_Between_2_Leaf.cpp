    int maxSumAll = INT_MIN;
    int maxSum(Node * root){
        if (root==NULL) return 0;
        int a,b = 0;
        if (root->left) a = maxSum(root->left);
        if (root->right) b = maxSum(root->right);
        if (!root->left && !root->right) return root->data;
        if (root->left && !root->right) return a+root->data;
        if (root->right && !root->left) return b+root->data;
        maxSumAll = max(maxSumAll, a+b+root->data);
        return max(a,b)+root->data;
    }
    
    int maxPathSum(Node* root)
    {
        if (root==NULL) return 0;
        if (!root->left && !root->right) return root->data;
        int x = maxSum(root);
        // if any of the child of the main root is null, that means, we will have to exclude that root and return max sum received from its child.
        if (root->left==NULL || root->right==NULL){
            return max(x,maxSumAll);
        } 
        return maxSumAll;
        // code here
    }