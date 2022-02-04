bool dfs(int node,int parent,vector<int>adj[],vector<int>&visited)
    {
        visited[node]=1;
        for(int child:adj[node])
        {
            if(visited[child]==0)
            {
                if(dfs(child,node,adj,visited)==true)
                return true;
            }
            else if(child!=parent)
            {
                return true;
            }
        }
        return false;
    }
    
    bool isCycle(int n, vector<int> adj[]) {
        // Code here
        vector<int>visited(n,0);
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                bool res=dfs(i,-1,adj,visited);
                if(res==true)
                {
                    return true;
                }
            }
        }
        return false;
    }
