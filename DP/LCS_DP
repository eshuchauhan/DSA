#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int dp[1001][1001];

int LCS_DP(string x,string y,int n,int m)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1]) dp[i][j]=1+dp[i-1][j-1];
            
            else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][m];
}

int LCS_memo(string &x,string &y,int n,int m)
{
    if(n==0 || m==0) return 0;
    
    if(dp[n][m]!=-1) return dp[n][m];
    
    if(x[n-1]==y[m-1]) return dp[n][m]=1+LCS_memo(x,y,n-1,m-1);
    
    else return dp[n][m]=max(LCS_memo(x,y,n-1,m),LCS_memo(x,y,n,m-1));
}

int LCS_recursive(string x,string y,int n,int m)
{
    if(n==0 || m==0) return 0;
    
    if(x[n-1]==y[m-1]) return 1+LCS_recursive(x,y,n-1,m-1);
    
    else return max(LCS_recursive(x,y,n-1,m),LCS_recursive(x,y,n,m-1));
}

int main()
{
    string x,y;
    cin>>x>>y;
    memset(dp,-1,sizeof(dp));
    cout<<LCS_dp(x,y,x.size(),y.size());
}

