class Solution {
  public:
    int minTime(Node* root, int target) 
    {
        map<Node*,Node*>m;
        queue<Node*>q;
        Node *res=NULL;
        
        q.push(root);
        m[root]=NULL;
        while(q.size()>0)
        {
            Node *front=q.front();
            q.pop();
            
            if(front->data==target) res=front;
            
            if(front->left!=NULL)
            {
                q.push(front->left);
                m[front->left]=front;
            }
            if(front->right!=NULL)
            {
                q.push(front->right);
                m[front->right]=front;
            }
        }
        int ans=0;
        map<Node*,bool>vis;
        
        while (!q.empty()) q.pop();
        
        q.push(res);
        vis[res]=true;
        
        while(q.size()>0)
        {
            int n=q.size();
            int c=0;
            for(int i=0;i<n;i++)
            {
                Node *x=q.front();
                q.pop();
                
                if(x->left!=NULL and vis[x->left]==false)
                {
                    c++;
                    q.push(x->left);
                    vis[x->left]=true;
                }
                if(x->right!=NULL and vis[x->right]==false)
                {
                    c++;
                    q.push(x->right);
                    vis[x->right]=true;
                }
                
                if(m[x]!=NULL and vis[m[x]]==false)
                {
                    c++;
                    q.push(m[x]);
                    vis[m[x]]=true;
                }
            }
            if(c!=0)
            {
                ans++;
            }
        }
        return ans;
    }
};
