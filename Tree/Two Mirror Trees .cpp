class Solution
{
    public:
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
};
