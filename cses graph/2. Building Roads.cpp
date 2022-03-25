#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>adj[100001];
ll vis[100001];

ll dx[4]={0,1,0,-1};
ll dy[4]={1,0,-1,0};

void dfs(ll node, ll n, ll m)
{
    vis[node]=true;
    
    for(auto child : adj[node])
    {
        if(vis[child]==false)
        {
            dfs(child,n,m);
        }
    }
    
}

int main()
{
    ll i,n,m,x,y,count=0;
    cin>>n>>m;
    
    vector<int>ans;
    
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            dfs(i,n,m);
            count++;
            ans.push_back(i);
        }
    }
    cout<<count-1<<endl;
    for(i=0;i<ans.size()-1;i++)
    {
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
}
