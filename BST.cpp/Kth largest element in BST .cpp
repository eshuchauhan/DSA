class Solution
{
    public:
    void helper(Node *root,vector<int>&v)
    {
        if(root==NULL) {return;}
        helper(root->left,v);
        v.push_back(root->data);
        helper(root->right,v);
    }
    int kthLargest(Node *root, int k)
    {
        //Your code here
        if(root==NULL) return 0;
        vector<int>v;
        helper(root,v);
        int n=v.size();
        return v[n-k];
    }
};
