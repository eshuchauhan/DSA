class Solution {
public:

    void dfs(int node,vector<vector<int>>&adj,vector<int>&visited)
    {
        if(visited[node]==0) visited[node]=1;
        
        for(int i=0;i<adj[node].size();i++)
        {
            int child=adj[node][i];
            if(visited[child]==0)
                dfs(child,adj,visited);
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
        {
            return -1;
        }
        vector<vector<int>>adj(n);
        vector<int>visited(n,0);
        for(int i=0;i<connections.size();i++)
        {
            int u=connections[i][0];
            int v=connections[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        int cc=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                cc++;
                dfs(i,adj,visited);
            }
        }
        return cc-1;
    }
};
