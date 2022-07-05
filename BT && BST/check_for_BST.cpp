    int flag = 1;
    bool check(Node*root, int lowerLimit, int upperLimit){
        if (root->data<lowerLimit || root->data>upperLimit) flag = 0;
        if (root->right) bool a = check(root->right, root->data+1, upperLimit);
        if (root->left) bool b = check(root->left, lowerLimit, root->data-1);
    }
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        check(root, INT_MIN, INT_MAX);
        return flag;
    }