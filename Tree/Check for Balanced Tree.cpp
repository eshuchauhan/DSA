class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int check(Node *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int left=check(root->left);
        int right=check(root->right);
        
        if(left==-1 || right==-1)
        {
            return -1;
        }
        if(abs(left-right)>1)
        {
            return -1;
        }
        
        return max(right,left)+1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(check(root)!=-1)
        {
            return true;
        }
        return false;
    }
};
