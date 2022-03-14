#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct node
{
    ll u,v,wt;
    
    node(ll first, ll second, ll weight)
    {
        u=first;
        v=second;
        wt=weight;
    }
};

bool comp(node a, node b)
{
    return a.wt<b.wt;
}

ll findpar(ll u, vector<ll>&parent)
{
    if(u==parent[u]) return u;
    return findpar(parent[u],parent);
}

void Union(ll u, ll v, vector<ll>&parent, vector<ll>&rank)
{
    u=findpar(u, parent);
    v=findpar(v, parent);
    
    if(rank[u]<rank[v])
    {
        parent[u]=v;
    }
    else if(rank[v]<rank[u])
    {
        parent[v]=u;
    }
    else
    {
        parent[v]=u;
        rank[u]++;
    }
}

int main()
{
    ll n,m,i,j;
    cin>>n>>m;
    
    vector<node>edges;
    
    for(i=0;i<m;i++)
    {
        ll u,v,wt;
        cin>>u>>v>>wt;
        
        edges.push_back(node(u,v,wt));
    }
    
    sort(edges.begin(),edges.end(),comp);
    
    vector<ll>parent(n);
    
    for(i=0;i<n;i++)
    {
        parent[i]=i;
    }
    
    vector<ll>rank(n,0);
    
    ll cost=0;
    
    vector<pair<ll,ll>>mst;
    
    for(auto it:edges)
    {
        if(findpar(it.v,parent)!=findpar(it.u,parent))
        {
            cost=cost+it.wt;
            mst.push_back({it.u,it.v});
            
            Union(it.u, it.v, parent, rank);
        }
    }
    cout<<cost<<endl;
    
    for(auto it : mst) cout<<it.first<<"-"<<it.second<<endl;
}



