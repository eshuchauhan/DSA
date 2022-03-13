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
    vector<ll>v;
    
    for(i=0;i<n;i++)
    {
        if(vis[i]==0) dfs(i,v);
    }
    
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}
