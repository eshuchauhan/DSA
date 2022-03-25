#include<bits/stdc++.h>
using namespace std;

#define ll long long int

vector<int>adj[100001];
int vis[100001]={0};
int col[100001];

bool dfs(int node , int c)
{
    vis[node]=1;
    col[node]=c;
    
    for(auto child : adj[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,c^1)==false)
            {
                return false;
            }
        }
        else if(col[child]==col[node])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    ll i,j,n,m,x,y;
    cin>>n>>m;
    
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            bool flag=dfs(i,0);
            if(flag==false)
            {
                cout<<"IMPOSSIBLE"<<endl;
                return 0;
            }
        }
    }
    
    // cout<<"true"<<endl;
    
    for(i=1;i<=n;i++)
    {
        cout<<col[i]+1<<" ";
    }
    cout<<endl;
}
