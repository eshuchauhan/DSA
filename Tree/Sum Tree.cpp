Given a Binary Tree. Return 1 if, for every node X in the tree other than the leaves, its value is equal to the sum of its left subtree's value and its right subtree's value. Else return 0.

An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.


Example 1:

Input:
    3
  /   \    
 1     2

Output: 1
Explanation:
The sum of left subtree and right subtree is
1 + 2 = 3, which is the value of the root node.
Therefore,the given binary tree is a sum tree.
  
  class Solution
{
    public:
    int helper(Node *root,int &ans)
    {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL)
        {
            return root->data;
        }
        int left=helper(root->left,ans);
        int right=helper(root->right,ans);
        int sum=left+right;
        if(root->data!=sum)
        {
            ans=false;
        }
        return sum+root->data;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         int ans=1;
         helper(root,ans);
         return ans;
    }
};
