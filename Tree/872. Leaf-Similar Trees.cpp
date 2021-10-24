class Solution {
public:
    void helper(TreeNode* root,vector<int>&v)
    {
        queue<TreeNode*>q;
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(root->val);
        }
        helper(root->left ,v);
        helper(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL)
        {
            return true;
        }
        
        vector<int>v1,v2;
        helper(root1,v1);
        helper(root2,v2);
        if(v1==v2)
            return true;
        return false;
    }
};872. Leaf-Similar Trees
