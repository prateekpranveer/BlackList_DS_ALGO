void left(Node*root, vector<int>&v){
     if (root==NULL) return;
     v.push_back(root->data);
     if (!root->left) left(root->right,v);
     else{
         left(root->left,v);
     }
     
 }

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
    vector<int>v;
    left(root, v);
    return v;
   // Your code here
}