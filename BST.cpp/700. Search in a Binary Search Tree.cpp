class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            return root;
        }
        TreeNode* x=new TreeNode();
        if(root->val<val)
        {
            x=searchBST(root->right,val);
        }
        else if(root->val>val)
        {
            x=searchBST(root->left,val);
        }
        else
        {
            x=root;
        }
        return x;
    }
};
