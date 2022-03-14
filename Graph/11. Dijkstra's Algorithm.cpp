#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll x,y,n,m,i,j,w,source;
    cin>>n>>m;
    
    vector<pair<ll,ll>>adj[n+1];
    vector<ll>dis(n+1,INT_MAX);
    vector<ll>parent(n+1);
    ll vis[n+1]={0};
    
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    
    cin>>source;
    
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>q;
    
    dis[source]=0;
    
    q.push({0,source});
    
    while(q.size()>0)
    {
        ll node=q.top().second;
        
        q.pop();
        
        for(auto it : adj[node])
        {
            ll child=it.first;
            ll d=it.second;
            
            if(dis[child]>d+dis[node])
            {
                q.push({d,child});
                dis[child]=d+dis[node];
                
                parent[child]=node;
            }
        }
    }
    
    for(i=1;i<=n;i++) cout<<dis[i]<<" ";
    cout<<endl;
    
    // shortest path from source to destination is: 
    
    if(dis[n]==INT_MAX) cout<<-1<<endl;
    else
    {
        vector<ll>v;
        ll x=n;
        while(true)
        {
            if(x==1) break;
            
            v.push_back(x);
            
            x=parent[x];
        }
        
        v.push_back(1);
        
        reverse(v.begin(),v.end());
        
        for(auto it: v) cout<<it<<" ";
        cout<<endl;
    }
}

// 5 6
// 1 2 2
// 1 4 1
// 4 3 3
// 2 3 4
// 2 5 5
// 3 5 1
// 1
Dijkstra's Algorithm 
