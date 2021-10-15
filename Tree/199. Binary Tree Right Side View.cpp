class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()!=0)
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* x=q.front();
                q.pop();
                if(x->left!=NULL) q.push(x->left);
                if(x->right!=NULL) q.push(x->right);
                if(i==n-1)
                {
                    ans.push_back(x->val);
                }
            }
        }
        return ans;
    }
};
