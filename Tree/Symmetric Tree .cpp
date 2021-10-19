class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    int areMirror(Node* root1, Node* root2) {
    // Your code here
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
    if(root1==NULL || root2==NULL)
    {
        return false;
    }
    if(root1->data!=root2->data)
    {
        return false;
    }
    return areMirror(root1->left,root2->right) && areMirror(root1->right,root2->left);
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    if(root==NULL) return true;
	    return areMirror(root->left, root->right);
    }
};
