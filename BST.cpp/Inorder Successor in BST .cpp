class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        Node *ans=NULL;
        Node *copy=root;
        while(copy!=NULL)
        {
            if(copy->data>x->data)
            {
                ans=copy;
                copy=copy->left;
            }
            else if(copy->data<=x->data)
            {
                copy=copy->right;
            }
        }
        return ans;
    }
};
