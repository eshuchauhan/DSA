Using BFS

class Solution {
public:
    int level=0;
    int minDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()!=0)
        {
            int n=q.size();
            level++;
            for(int i=0;i<n;i++)
            {
                TreeNode* x=q.front();
                q.pop();
                if(x->left!=NULL) q.push(x->left);
                if(x->right!=NULL) q.push(x->right);
                
                if(x->left==NULL && x->right==NULL)
                {
                    return level;
                }
            }
        }
        return 0;
    }
};


