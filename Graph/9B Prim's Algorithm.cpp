#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll x,y,n,m,i,j,w,source;
    cin>>n>>m;
    
    vector<pair<ll,ll>>adj[n];
    
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    
    vector<ll>dis(n,INT_MAX);
    vector<bool>mst(n,false);
    vector<ll>parent(n,-1);
    
    cin>>source;
    
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>q;
    
    dis[source]=0;
    
    q.push({0,source});
    
    for(i=0;i<n-1;i++)
    {
        ll u=q.top().second;
        q.pop();
        
        mst[u]=true;
        
        for(auto it:adj[u])
        {
            ll v=it.first;
            ll weight=it.second;
            
            if(mst[v]==false and weight<dis[v])
            {
                parent[v]=u;
                dis[v]=weight;
                q.push({dis[v],v});
            }
        }
    }
    
    for(auto i=1;i<n;i++) cout<<parent[i]<<"-"<<i<<" ";
}

// 5 6
// 0 1 2
// 0 3 6
// 3 1 8
// 1 4 5
// 1 2 3
// 4 2 7
// 0
