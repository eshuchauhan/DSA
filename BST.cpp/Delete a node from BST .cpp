Node *FINDLASTRIGHT(Node *root)
{
    if(root->right==NULL)
    {
        return root;
    }
    return FINDLASTRIGHT(root->right);
}

Node *helper(Node *root)
{
    if(root->left==NULL) return root->right;
    else if(root->right==NULL) return root->left;
    
    Node *rightchild=root->right;
    Node *x=FINDLASTRIGHT(root->left);
    x->right=rightchild;
    return root->left;
}
Node *deleteNode(Node *root, int x) {
    // your code goes here
    if(root==NULL) return 0;
    if(root->data==x)
    {
        return helper(root);
    }
    Node *dummy=root;
    
    while(root!=NULL)
    {
        if(root->data>x)
        {
            if(root->left!=NULL and root->left->data==x)
            {
                root->left=helper(root->left);
            }
            else
            {
                root=root->left;
            }
        }
        else
        {
            if(root->right!=NULL and root->right->data==x)
            {
                root->right=helper(root->right);
            }
            else
            {
                root=root->right;
            }
        }
        return dummy;
    }
}
