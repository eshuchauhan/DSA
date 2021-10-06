class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       if(root==NULL)
       {
           return;
       }
       queue<Node*>q;
       q.push(root);
       
       while(q.size()!=0)
       {
           int n=q.size();
           for(int i=0;i<n;i++)
           {
               
               Node *x=q.front();
               q.pop();
               
               if(i==n-1)
               {
                   x->nextRight=NULL;
               }
               else
               {
                   x->nextRight=q.front();
               }
               
               if(x->left!=NULL) q.push(x->left);
               if(x->right!=NULL) q.push(x->right);
           }
       }
    }   
};
