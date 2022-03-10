class Solution {
public:
    int change(int sum, vector<int>& a) {
        int i,j,n=a.size();
        
        int dp[n+1][sum+1];
        
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=sum;j++)
            {
                if(a[i-1]>j) dp[i][j]=dp[i-1][j];
                else if(a[i-1]<=j) dp[i][j]=dp[i-1][j]+dp[i][j-a[i-1]];
            }
        }
        return dp[n][sum];
    }
};
