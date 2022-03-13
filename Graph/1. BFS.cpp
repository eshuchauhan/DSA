#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>adj[100001];
int vis[100001]={0};

void bfs(ll n,ll m)
{
    ll x,y,i,j;
    
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    vector<ll>v;
    
    for(i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            queue<ll>q;
            q.push(i);
            vis[i]=1;
            
            while(q.size()>0)
            {
                ll node=q.front();
                q.pop();
                
                v.push_back(node);
                
                for(auto it:adj[node])
                {
                    if(vis[it]==0)
                    {
                        q.push(it);
                        vis[it]=1;
                    }
                }
            }
        }
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    ll no_of_nodes,edges;
    cin>>no_of_nodes>>edges;
    bfs(no_of_nodes,edges);
}
