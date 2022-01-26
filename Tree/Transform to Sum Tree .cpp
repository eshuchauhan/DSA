int helper(Node *root)
    {
        if(root==NULL) return 0;
    
        int x=helper(root->left);
        int y=helper(root->right);
        
        int z=root->data;
        root->data=x+y;
        return x+y+z;
        
    }
    void toSumTree(Node *root)
    {
        // Your code here
        if(root==NULL) return;
        helper(root);
    }
