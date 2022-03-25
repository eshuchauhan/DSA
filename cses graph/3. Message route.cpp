#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll,ll>>adj[100001];
vector<ll>dist(100001);
vector<ll>parent(100001);
const ll maxn=(ll)1e18;
int main()
{
    ll n,m,i,j;
    cin>>n>>m;
    
    for(i=0;i<m;i++)
    {
        ll u,v,w=1;
        cin>>u>>v;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(i=1;i<=n;i++) parent[i]=i,dist[i]=maxn;
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    
    dist[1]=0;
    
    q.push({0,1});  // dist,node
    
    while(q.size()>0)
    {
        int u=q.top().second;
        q.pop();
        
        for(auto it: adj[u])
        {
            int v=it.first;
            int d=it.second;
            
            if(dist[v]>dist[u]+d)
            {
                q.push({d,v});
                dist[v]=dist[u]+d;
                parent[v]=u;
            }
        }
    }
    vector<ll>v;
    if(dist[n]==maxn) cout<<"IMPOSSIBLE"<<endl;
    else
    {
        ll x=n;
        while(true)
        {
            if(x==1) break;
            v.push_back(x);
            x=parent[x];
        }
        v.push_back(1);
        reverse(v.begin(),v.end());
        cout<<v.size()<<endl;
        for(auto it:v) cout<<it<<" ";
    }
}
