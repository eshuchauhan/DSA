class Solution {
public:
    void helper(TreeNode *root, vector<int>&v)
    {
        if(root==NULL) return;
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL) return 0;
       
        vector<int>v;
        helper(root,v);
        
        TreeNode *temp=new TreeNode(),*ans=temp;
        
        for(auto i:v)
        {
            temp->right= new TreeNode(i);
            temp=temp->right;
        }
        return ans->right;
    }
};
