#include<bits/stdc++.h>
using namespace std;

int recursive(vector<int>&a,int n)
{
    if(n==0 || n==1) return a[n];
    
    int x=recursive(a,n-1);
    int y=recursive(a,n-2);
    
    return min(x,y)+a[n];
}

int memo(vector<int>&a, int n, vector<int>&dp)
{
    if(n==0 || n==1) return a[n];
    
    if(dp[n]!=-1) return dp[n]; 
    
    int x=memo(a,n-1,dp);
    int y=memo(a,n-2,dp);
    
    return dp[n]=min(x,y)+a[n];
}

int DP(vector<int>&a, int n, vector<int>dp)
{
    dp[0]=a[0];
    dp[1]=a[1];
    
    for(int i=2;i<n;i++)
    {
        dp[i]=a[i]+min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
}
    
int main()
{
    int n,i;
    cin>>n;
    
    vector<int>a(n);
    
    for(i=0;i<n;i++) cin>>a[i];
    
    vector<int>dp(n+1,-1);
    
    cout<<min(recursive(a,n-1),recursive(a,n-2))<<endl;
    
    cout<<min(memo(a,n-1,dp),memo(a,n-2,dp))<<endl;
    
    cout<<DP(a,n,dp)<<endl;
    
}
