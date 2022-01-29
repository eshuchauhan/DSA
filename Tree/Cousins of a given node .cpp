vector<int> printCousins(Node* root, Node* node_to_find)
    {
        //code here
        vector<int>ans;
        queue<pair<Node*,Node*>>q;
        q.push({NULL,root});
        while(q.size()>0)
        {
            int n=q.size();
            vector<pair<int,int>>v;
            for(int i=0;i<n;i++)
            {
                Node *x=q.front().second;
                q.pop();
                
                if(x->left!=NULL) 
                {
                    q.push({x,x->left});
                    v.push_back({x->data,x->left->data});
                }
                if(x->right!=NULL) 
                {
                    q.push({x,x->right});
                    v.push_back({x->data,x->right->data});
                }
            }
            int parent=-1,x=node_to_find->data;

            for(auto it:v)
            {
               if(it.second==x)
               {
                   parent=it.first;
                   break;
               }
            }
            if(parent!=-1)
            {
                for(auto it:v)
                {
                    if(it.first==parent)continue;
                    ans.push_back(it.second);
                }
                if(ans.size()==0)
                {
                    ans.push_back(-1);
                }
                return ans;
            }
        }
        ans.push_back(-1);
        return ans;
    }
