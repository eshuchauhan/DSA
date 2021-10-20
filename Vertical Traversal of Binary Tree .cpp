 vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(root==NULL) return ans;
        map<int,vector<int>>mapp;
        queue<pair<Node*,int>>q;
        
        q.push({root,0});
        
        while(q.size()!=0)
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node* x=q.front().first;
                int h=q.front().second;
                
                q.pop();
                
                if(x->left!=NULL) q.push({x->left,h-1});
                if(x->right!=NULL) q.push({x->right,h+1});
                
                mapp[h].push_back(x->data);
            }
        }
            for(auto i:mapp)
            {
                for(auto y:i.second)
                {
                ans.push_back(y);
                }
            }
            return ans;
        }
