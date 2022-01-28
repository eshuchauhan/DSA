int helper(int i,int j,vector<vector<int>>&a,int n,int m,vector<vector<int>>&dp)
{
    if(i<0 || i>=n || j>=m)
    {
        return 0;
    }
    
    if(dp[i][j]!=0)
    {
        return dp[i][j];
    }
    
    int x=helper(i,j+1,a,n,m,dp);
    int y=helper(i-1,j+1,a,n,m,dp);
    int z=helper(i+1,j+1,a,n,m,dp);
    
    dp[i][j]=max({x,y,z})+a[i][j];
    return dp[i][j];
}
int maxGold(int n, int m, vector<vector<int>> a)
{
        // code here
    vector<vector<int>>dp(n,vector<int>(m,0));
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        int ans=helper(i,0,a,n,m,dp);
        maxi=max(ans,maxi);
    }
    return maxi;
}
};
