class Solution {
public:
    int numTrees(int n) {
        int dp[n+1],i,j;
        
        dp[0]=1,dp[1]=1;
    
        for(i=2;i<=n;i++)
        {
            j=0,dp[i]=0;
            while(j<i)
            {
                dp[i]=dp[i]+dp[j]*dp[i-j-1];
                j++;
            }
            // cout<<dp[i]<<" "; 
        }
        return dp[n];
    }
};
