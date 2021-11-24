bool helper(Node *root, int mini,int maxi)
    {
        if(root==NULL) return true;
        return (root->data>mini and root->data<maxi && helper(root->left,mini,root->data) && helper(root->right,root->data,maxi));
    }
    bool isBST(Node* root) 
    {
        // Your code here
        if(root==NULL) return true;
        return helper(root,-999999999,999999999);
    }
