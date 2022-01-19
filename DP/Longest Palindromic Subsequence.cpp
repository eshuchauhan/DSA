 int longestPalinSubseq(string a) {
        //code here
        int n=a.size();
        int dp[n+1][n+1]={0};
        for(int i=0;i<n;i++)  // total iteration
        {
            for(int j=0;j<n-i;j++)  // row
            {
                int k=i+j;          // col
                if(j==k)
                {
                    dp[j][j]=1;
                }
                else if(a[j]==a[k])
                {
                    dp[j][k]=dp[j+1][k-1]+2;
                }
                else
                {
                    dp[j][k]=max(dp[j+1][k],dp[j][k-1]);
                }
            }
        }
        return dp[0][n-1];
    }
