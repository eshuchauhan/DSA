class Solution
{
  public:
    //Function to check if S is a subtree of tree T.
    bool helper(Node* t, Node* s)
    {
        if(t==NULL && s==NULL) return true;
        else if(t==NULL || s==NULL) return false;
        else if(t->data==s->data)
        {
            return helper(t->left,s->left) && helper(t->right,s->right);
        }
        else
        {
            return false;
        }
    }
    bool isSubTree(Node* t, Node* s) 
    {
        // Your code here
        if(t==NULL && s==NULL) return true;
        if(t==NULL || s==NULL) return false;
        
        if(helper(t,s))
        {
            return true;
        }
        else
        {
            return isSubTree(t->left,s) || isSubTree(t->right,s);
        }
        
    }
};
