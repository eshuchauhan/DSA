class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *root1, Node *root2)
    {
        //Your Code here
        if(root1==NULL && root2==NULL)
        {
            return true;
        }
        else if(root1==NULL || root2==NULL)
        {
            return false;
        }
        else if(root1->data!=root2->data)
        {
            return false;
        }
        
        return isIdentical(root1->left,root2->left) && isIdentical(root1->right , root2->right);
    }
};


