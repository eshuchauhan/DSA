#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> ar[100001];
ll visited[100001];

void dfs(int node)
{
	visited[node] = 1;
 
	for(int child : ar[node])
	if(!visited[child])
	dfs(child);
 
}
int main()
{
    ll n,m,a,b,i,j;
	cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    
    int cc=0;
    for(i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
            cc++;
        }
    }
    cout<<cc<<endl;
}
