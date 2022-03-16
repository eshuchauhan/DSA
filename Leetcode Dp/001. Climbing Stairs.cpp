#include<bits/stdc++.h>
using namespace std;

int recursive(int n)
{
    if(n<=2) return n;
    
    int x=recursive(n-1);
    int y=recursive(n-2);
    
    return x+y;
}

int memo(int n ,vector<int>&dp)
{
    if(dp[n]!=-1) return dp[n];
    
    int x=memo(n-1,dp);
    int y=memo(n-2,dp);
    
    return dp[n]=x+y;
}

int DP(int n, vector<int>dp)
{
    for(int i=3;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
    
    return dp[n];
}
    
int main()
{
    int n;
    cin>>n;
    
    vector<int>dp(n+1,-1);
    
    dp[1]=1;
    dp[2]=2;
    
    cout<<recursive(n)<<endl;
    
    cout<<memo(n,dp)<<endl;
    
    cout<<DP(n,dp)<<endl;
    
}
