Input:      
           3                               
         /    \                          
       4       5                     
      /  \      
    -10   4                          
Output: 16
Explanation:
Maximum Sum lies between leaf node 4 and 5.
4 + 4 + 3 + 5 = 16.class Solution {

    public:
    int sum=INT_MIN;
    int maxiPath(Node *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int left=maxiPath(root->left);
        int right=maxiPath(root->right);
        
        if(root->left==NULL)
        {
            return right + root->data;
        }
        
        if(root->right==NULL)
        {
            return left+root->data;
        }
        
        sum=max(sum,left+right+root->data);
        
        return max(left,right)+root->data;
    }
    int maxPathSum(Node* root)
    {
        // code here
        int ans=maxiPath(root);
        if(sum!=INT_MIN)
        {
            return sum;
        }
        return ans;
        
    }
};
