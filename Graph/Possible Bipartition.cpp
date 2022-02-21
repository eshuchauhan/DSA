class Solution {
public:
    bool dfs(int node ,int c,vector<int>&vis,vector<int>&color,vector<int>adj[])
    {
        vis[node]=1;
        color[node]=c;
        
        for(auto child:adj[node])
        {
            if(vis[child]==0)
            {
                if(dfs(child,c^1,vis,color,adj)==false)
                {
                    return false;
                }
            }
            else if(color[child]==color[node])
            {
                return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& a) {
        int i,j,u,v;
        
        vector<int>adj[n+1];
        for(i=0;i<a.size();i++)
        {
            u=a[i][0];
            v=a[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(n+1,0);
        vector<int>color(n+1,-1);
        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                bool x=dfs(i,0,vis,color,adj);
                if(x==false) return false;
            }
        }
        return true;
    }
};
