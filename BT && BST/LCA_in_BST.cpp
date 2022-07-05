Node* LCA(Node *root, int n1, int n2)
{
   if (root==NULL) return root;
   if (root->data==n1 || root->data==n2) return root;
   Node*left;
   Node*right;
   left = LCA(root->left,n1,n2);
   right = LCA(root->right,n1,n2);

   if (left && right) return root;
   if (!left && !right) return NULL;
   if (!left) return right;
   if (!right) return left;
}