int f = 1;
int isSumTree2(Node *root)
{
    // If root doesn't exists, return 0 from that root.
    if (!root)
        return 0;
    // If doesn't exists root->left or root->right, return root->data only.
    if (!root->left && !root->right)
        return root->data;

    // Send the recursion to the left child
    int a = isSumTree2(root->left);
    // Send the recursion to the left child
    int b = isSumTree2(root->right);
    // If anywhere in the process, the tree is not the sum tree, i.e, a+b!=root->data, make f = 0
    if (a + b != root->data)
        f = 0;
    // Function will be returning the total of left sum and right sum + root->data;
    return a + b + root->data;
}

public:
bool isSumTree(Node *root)
{
    // If anywhere while traversing, f becomes 0, then basically some child tree is not a sum tree, so overall tree will not be a sum tree.
    isSumTree2(root);
    return f;
}