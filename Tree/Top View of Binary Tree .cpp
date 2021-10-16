class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>v;
        map<int,int>mapp;
        queue<pair<Node*,int>>q;
        if(root==NULL)
        {
            return v;
        }
        q.push({root,0});
        while(!q.empty())
        {
            Node* x=q.front().first;
            int h=q.front().second;
            q.pop();
            
            if(x->left!=NULL) q.push({x->left,h-1});
            if(x->right!=NULL) q.push({x->right,h+1});
            
            if(mapp[h]==0) mapp[h]=x->data; 
        }
        for(auto i:mapp)
        {
            v.push_back(i.second);
        }
        return v;
    }

};
