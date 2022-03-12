class Solution {
public:
    int helper(TreeNode *root,int &res)
    {
        if(root==NULL) return 0;
        
        int left=helper(root->left,res);
        int right=helper(root->right,res);
        
        int temp=max(max(left,right)+root->val,root->val);
        
        int ans=max(temp,left+right+root->val);
        
        res=max(res,ans);
        
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
    
        helper(root,res);
        
        return res;
        
    }
};
