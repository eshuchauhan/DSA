class Solution {
public:
    int coinChange(vector<int>& a, int sum) {
        int i,j,n=a.size();
        
        int dp[n+1][sum+1];
        
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(i==0) dp[i][j]=INT_MAX-1;
                if(j==0) dp[i][j]=0;
            }
        }
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=sum;j++)
            {
                if(a[i-1]>j) dp[i][j]=dp[i-1][j];
                else if(a[i-1]<=j) dp[i][j]=min(dp[i-1][j],1+dp[i][j-a[i-1]]);
            }
        }
        if(dp[n][sum]==INT_MAX-1) return -1;
        return dp[n][sum];
        
    }
};
