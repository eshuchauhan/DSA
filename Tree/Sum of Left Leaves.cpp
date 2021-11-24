class Solution {
public:
    int sum=0;
    int helper(TreeNode *root)
    {
        if(root==NULL)  return 0;
        if(root->left!=NULL and (root->left->left==NULL and root->left->right==NULL)) sum=sum+root->left->val;
        
        helper(root->left);
        helper(root->right);
        return sum;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        
        int ans=0;
        return helper(root);
    }
};
