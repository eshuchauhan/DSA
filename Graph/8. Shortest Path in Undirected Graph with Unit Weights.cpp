#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll x,y,n,m,i,j;
    cin>>n>>m;
    
    vector<ll>adj[n];
    vector<ll>dis(n,INT_MAX);

    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    queue<ll>q;
    
    dis[0]=0;
    
    q.push(0);
    
    while(q.size()>0)
    {
        int node=q.front();
        
        q.pop();
        
        for(auto child:adj[node])
        {
            if(dis[child]>1+dis[node])
            {
                dis[child]=1+dis[node];
                q.push(child);
            }
        }
    }
    for(auto it:dis)
    {
        cout<<it<<" ";
    }
    cout<<endl;

}
