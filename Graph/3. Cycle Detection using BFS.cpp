// TC=O(N+E)
// SC=O(N+E)+O(N)+O(N)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>adj[100001];
int vis[100001]={0};

void dfs(int node,vector<ll>&v)
{
    vis[node]=1;
    
    v.push_back(node);
    
    for(auto child:adj[node])
    {
        if(vis[child]==0) dfs(child,v);
    }
}

int main()
{
    ll n,m,i,j,x,y;
    
    cin>>n>>m;
    
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            queue<pair<int,int>>q;
            q.push({i,-1});
            vis[i]=1;
            while(q.size()>0)
            {
                int node=q.front().first;
                int parent=q.front().second;
                
                q.pop();
                
                for(auto child:adj[node])
                {
                    if(vis[child]==0)
                    {
                        q.push({child,node});
                        vis[child]=1;
                    }
                    else if(parent!=child)
                    {
                        cout<<"true"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"false"<<endl;
}
