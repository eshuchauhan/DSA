class Solution{
  public:
    /*You are required to complete this method*/
    bool ans;
    int height(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        if(root->left!=NULL && root->right!=NULL && left!=right)
        {
            ans=false;
        }
        return 1+max(left,right);
    }
    bool check(Node *root)
    {
        //Your code here
        ans=true;
        height(root);
        return ans;
    }
};





class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        //Your code here
        queue<Node*>q;
        if(root==NULL)
        {
            return 0;
        }
        q.push(root);
        while(q.size()!=0)
        {
            int count=0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node *x=q.front();
                q.pop();
                if(x->left!=NULL) q.push(x->left);
                if(x->right!=NULL) q.push(x->right);
                if(x->left==NULL && x->right==NULL)
                {
                    count++;
                }
            }
            if(q.size()>0 && count>0)
            {
                return false;
            }
        }
        return true;
    }
};
