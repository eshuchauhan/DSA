 bool vis[10000]={false};
    void dfs(int start, vector<int>adj[], vector<int>&v)
    {
        if(vis[start]==false)
        {
            vis[start]=true;
            v.push_back(start);
            
            for(int it:adj[start])
            {
                if(vis[it]==false)
                {
                    dfs(it,adj,v);
                }
            }
        }
        return;
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>v;
        dfs(0,adj,v);
        return v;
    }
