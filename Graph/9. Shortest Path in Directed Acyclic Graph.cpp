#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void topo(int node, stack<ll>&s, ll vis[] ,vector<pair<ll,ll>>adj[])
{
    vis[node]=1;
    
    for(auto it:adj[node])
    {
        if(vis[it.first]==0)
        {
            topo(it.first,s,vis,adj);
        }
    }
    // cout<<node<<" ";
    s.push(node);
}
int main()
{
    ll x,y,n,m,i,j,w;
    cin>>n>>m;
    
    vector<pair<ll,ll>>adj[n];
    vector<ll>dis(n,INT_MAX);
    ll vis[n]={0};
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>w;
        adj[x].push_back({y,w});
    }
    
    stack<ll>s;
    
    for(i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            topo(i,s,vis,adj);
        }
    }
    
    dis[0]=0;
    
    while(!s.empty())
    {
        ll node=s.top();
        
        s.pop();
        
        if(dis[node]!=INT_MAX)
        {
            for(auto it : adj[node])
            {
                if(dis[it.first]>it.second+dis[node])
                {
                    dis[it.first]=it.second+dis[node];
                }
            }
        }
    }
    
    for(auto it: dis)
    {
        if(it==INT_MAX) cout<<"Infinity"<<" ";
        else
        cout<<it<<" ";
    }
    cout<<endl;
}


// 6 7
// 0 1 2
// 0 4 1
// 1 2 3
// 4 5 4
// 4 2 2
// 5 3 1
// 2 3 6

