class Solution{
  public:
    /*You are required to complete this method*/
    bool ans;
    int height(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        if(root->left!=NULL && root->right!=NULL && left!=right)
        {
            ans=false;
        }
        return 1+max(left,right);
    }
    bool check(Node *root)
    {
        //Your code here
        ans=true;
        height(root);
        return ans;
    }
};
