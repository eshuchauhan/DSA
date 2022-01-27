int height(Node *root)
    {
        if(root==NULL) return 0;
        int x=height(root->left);
        int y=height(root->right);
        
        return 1+max(x,y);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        if(root==NULL) return 0;
        if(height(root->left)>height(root->right))
        {
            return root->data+sumOfLongRootToLeafPath(root->left);
        }
        else if(height(root->left)<height(root->right))
        {
            return root->data+sumOfLongRootToLeafPath(root->right);
        }
        else
        {
            return root->data+max(sumOfLongRootToLeafPath(root->left),sumOfLongRootToLeafPath(root->right));
        }
    }
