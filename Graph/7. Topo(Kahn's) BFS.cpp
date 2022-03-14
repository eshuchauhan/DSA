#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>adj[100001];
ll vis[100001];
ll deg[100001];
int main()
{
    ll x,y,n,m,i,j;
    cin>>n>>m;
    
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        
        deg[y]++;
    }
    
    queue<ll>q;
    
    for(i=0;i<n;i++)
    {
        if(deg[i]==0)
        {
            q.push(i);
        }
    }
    
    vector<ll>v;
    
    while(q.size()>0)
    {
        int node=q.front();
        
        q.pop();
        
        v.push_back(node);
        
        for(auto child : adj[node])
        {
            deg[child]--;
            
            if(deg[child]==0)
            {
                q.push(child);
            }
        }
    }
    
    for(auto it: v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
