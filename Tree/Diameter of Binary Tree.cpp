class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node *root, int &maxi)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int l=height(root->left,maxi);
        int r=height(root->right,maxi);
        
        maxi=max(maxi,l+r);
        
        return max(r,l)+1;
        
    }
    int diameter(Node* root) {
        // Your code here
        int d=INT_MIN;
        height(root,d);
        return d+1;
        
    }
};
