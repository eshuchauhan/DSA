#include<bits/stdc++.h>
using namespace std;
#define ll long long int

char a[10001][10001];
bool vis[10001][10001];

ll dx[4]={0,1,0,-1};
ll dy[4]={1,0,-1,0};

bool isValid(ll x, ll y, ll n, ll m)
{
    if(x>=0 and y>=0 and x<n and y<m and a[x][y]=='.') return true;
    
    return false;
}

void dfs(ll x, ll y, ll n, ll m)
{
    vis[x][y]=true;
    
    for(ll i=0;i<4;i++)
    {
        ll newx=x+dx[i];
        ll newy=y+dy[i];
        
        if(isValid(newx,newy,n,m) and vis[newx][newy]==false)
        {
            dfs(newx,newy,n,m);
        }
    }
}
int main()
{
    ll i,j,n,m,count=0;
    cin>>n>>m;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            // cout<<a[i][j]<<" ";
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]=='.' and vis[i][j]==false)
            {
                count++;
                dfs(i,j,n,m);
            }
        }
    }
    cout<<count<<endl;
}
