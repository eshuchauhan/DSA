int maxGold(int n, int m, vector<vector<int>> a)
    {
        int i,j,dp[n][m],maxi=INT_MIN;
        for(j=m-1;j>=0;j--){
            for(i=0;i<n;i++){
                if(j==m-1) dp[i][j]=a[i][j];
                else if(i==0){
                    if(i!=n-1)
                    dp[i][j]=a[i][j]+max(dp[i][j+1],dp[i+1][j+1]);
                    else 
                    dp[i][j]=a[i][j]+dp[i][j+1];
                }
                else if(i==n-1) dp[i][j]=a[i][j]+max(dp[i-1][j+1],dp[i][j+1]);
                else dp[i][j]=a[i][j]+max({dp[i][j+1],dp[i-1][j+1],dp[i+1][j+1]});
            }
        }
        for(int i=0;i<n;i++) maxi=max(dp[i][0],maxi);
        return maxi;
    }
