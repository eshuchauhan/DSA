class Solution {
public:
    int index=0;
    TreeNode* createTree(vector<int>&preorder, vector<int>&inorder, int start,int end)
    {
        if(start>end)
        {
            return 0;
        }
        
        int pos;
        TreeNode* root=new TreeNode(preorder[index]);
        for(int j=start;j<=end;j++)
        {
            if(inorder[j]==preorder[index])
            {
                pos=j;
                break;
            }
        }
        index++;
        root->left=createTree(preorder,inorder,start,pos-1);
        root->right=createTree(preorder,inorder,pos+1,end);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return createTree(preorder,inorder,0,inorder.size()-1);
    }
};
