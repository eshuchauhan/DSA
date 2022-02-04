#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
vector<ll> adj[2001];
ll visited[2001];
ll color[2001];
 bool dfs(int node,int col)
    {
        visited[node]=1;
        color[node]=col;
        
        for(int child:adj[node])
        {
            if(visited[child]==0)
            {
                bool res=dfs(child,col^1);
                if(res==false)
                {
                    return false;
                }
            }
            else if(color[node]==color[child])
            {
                return false;
            }
        }
        return true;
    }
 
int main()
{
    ll t;
    cin>>t;
    for(ll k=1;k<=t;k++)
    {
        ll x,y,n,m,i,j;
        cin>>n>>m;
        for(i=1;i<=n;i++) adj[i].clear(),visited[i]=0;
        
        for(i=1;i<=m;i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bool flag=true;
 
        for(int i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                bool x=dfs(i,0);
                if(x==false)
                {
                    flag=false;
                }
            }
        }
        cout<<"Scenario #"<<k<<":"<<endl;
        
        if(flag==false) cout<<"Suspicious bugs found!"<<endl;
        else cout<<"No suspicious bugs found!"<<endl;
    }
} BUGLIFE - A Bug’s Life
