// TC=O(N+E)
// SC=O(N+E)+O(N)+O(N)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>adj[100001];
int vis[100001]={0};

bool dfs(int node,int parent)
{
    vis[node]=1;
    
    for(auto child:adj[node])
    {
        if(vis[child]==0) 
        {
            if(dfs(child,node)==true)
            {
                return true;
            }
        }
        else if(child!=parent)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ll n,m,i,j,x,y;
    
    cin>>n>>m;
    
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            bool flag=dfs(i,-1);
            if(flag==true)
            {
                cout<<"true"<<endl;
                return 0;
            }
        }
    }
    cout<<"false"<<endl;
}
