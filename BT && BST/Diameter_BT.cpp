    int diametersize = INT_MIN;
    //Calculating Diameter for both side and then adding them up
    int diameterx(Node * root){
        if(root == NULL) return 0;
        int a = diameterx(root->left);
        int b = diameterx(root->right);
        if (a+b>diametersize) diametersize = a+b;
        return 1+max(a,b);
    }
    
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        int x = diameterx(root);
        return 1+diametersize;
        // Your code here
    }