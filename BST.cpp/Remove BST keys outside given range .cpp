class Solution {
    public:
    Node *remove(Node* root , int l ,int r)
    {
        if(root==NULL) return NULL;
        
        root->left=removekeys(root->left,l,r);
        root->right=removekeys(root->right,l,r);
        
        if(root->data<l)
        {
            return root->right;
        }
        else if(root->data>r)
        {
            return root->left;
        }
        return root;
    }
    Node* removekeys(Node* root, int l, int r) {
        // code here
        if(root==NULL) return 0;
        
        root=remove(root,l,r);
        return root;
    }
};
