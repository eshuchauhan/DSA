vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int>v;
        if(root==NULL) return v;
        queue<Node*>q;
        q.push(root);
        while(q.size()>0)
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node *x=q.front();
                q.pop();
                if(x==NULL)
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(x->data);
                    if(x->left!=NULL) q.push(x->left);
                    else q.push(NULL);
                    if(x->right!=NULL) q.push(x->right);
                    else q.push(NULL);
                }
            }
        }
        // for(auto i:v)
        // cout<<i<<" ";
        // cout<<endl;
        return v;
    }
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &v)
    {
       //Your code here
       if(v.size()==0) return NULL;
       
       Node *temp=new Node(v[0]);
       
       queue<Node*>q;
       q.push(temp);
       int j=0;
       while(q.size()>0)
       {
           int n=q.size();
           for(int i=0;i<n;i++)
           {
               Node *x=q.front();
               q.pop();
               if(2*j+1<v.size())
               {
                   if(v[2*j+1]!=-1)
                   {
                       x->left=new Node(v[2*j+1]);
                       q.push(x->left);
                   }
                   else
                   {
                       x->left=NULL;
                   }
               }
               if(2*j+2<v.size())
               {
                    if(v[2*j+2]!=-1)
                    {
                        x->right=new Node(v[2*j+2]);
                        q.push(x->right);
                    }
                    else
                    {
                        x->right=NULL;
                    }
               }
               j++;
           }
       }
       return temp;
    }
