int maxD(Node * &root, int &ct){
     if (root==NULL) return INT_MAX;
     if (!root->right && !root->left) return root->data;
     int a = maxD(root->left,ct);
     int b = maxD(root->right,ct);
     int x = root->data;
     ct = max(ct,root->data-min(a,b));
     return min(x, min(b,a));
 }


int maxDiff(Node* root)
{
    int ct = INT_MIN;
    maxD(root,ct);
    return ct;
}