class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
        // code here 
        if(root==NULL)
        {
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        
        int th=max(left,right)+1;
        return th;
    }
};
