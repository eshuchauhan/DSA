class Solution {
public:
    void helper(TreeNode* root ,set<int>&s)
    { 
        if(root==NULL) return;
        helper(root->left,s);
        s.insert(root->val);
        helper(root->right,s);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>s;
        helper(root,s);
        if(s.size()<=1)
            return -1;
        auto it=s.begin();
        it++;
        return *it;
    }
};
