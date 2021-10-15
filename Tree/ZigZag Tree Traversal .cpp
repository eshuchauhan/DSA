class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        
        int flag=1;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()!=0)
        {
            int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                TreeNode* x=q.front();
                q.pop();
                
                v.push_back(x->val);
                
                if(x->left!=NULL) q.push(x->left);
                if(x->right!=NULL) q.push(x->right);
            }
            if(flag==1)
            {
                ans.push_back(v);
            }
            else
            {
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            flag=1-flag;
        }
        return ans;
    }
};
