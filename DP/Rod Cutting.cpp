int cutRod(int a[], int n) {
        //code here
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0||j==0) dp[i][j]=0;
                else if(j<i) dp[i][j]=dp[i-1][j];
                else if(j>=i) dp[i][j]=max(dp[i-1][j],a[i-1]+dp[i][j-i]);
            }
        }
        return dp[n][n];
    }
