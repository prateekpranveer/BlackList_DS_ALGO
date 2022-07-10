int height(struct Node* root){
        
        if (root==NULL) return 0;
        
        int a = height(root->left);
        int b = height(root->right);
        
        return 1+max(a,b);
        // code here 
    }