int minCoins(int coins[], int m, int v) 
	{ 
	    // Your code goes here
	    int dp[m+1][v+1];
	    int i,j;
	    for(i=0;i<=m;i++)
	    {
	        for(j=0;j<=v;j++)
	        {
	            if(j==0)
	            {
	                dp[i][j]=0;
	            }
	            if(i==0)
	            dp[i][j]=INT_MAX-1;
	        }
	    }
	    for(i=1;i<=m;i++)
	    {
	        for(j=1;j<=v;j++)
	        {
	            if(coins[i-1]<=j)
	            {
	                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
	            }
	            else
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    if(dp[m][v]==INT_MAX-1) return -1;
	    return dp[m][v];
	} 
