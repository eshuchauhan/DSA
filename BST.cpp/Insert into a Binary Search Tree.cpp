class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int x) {
        if(root==NULL)
        {
            return new TreeNode(x);
        }
        else if(root->val<x)
        {
            root->right=insertIntoBST(root->right,x);
        }
        else if(root->val>x)
        {
            root->left=insertIntoBST(root->left,x);
        }
        return root;
    }
};
