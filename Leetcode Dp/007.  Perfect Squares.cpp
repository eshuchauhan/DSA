class Solution {
public:
    int numSquares(int n) {
        int dp[n+1],i,j;
        
        dp[0]=0;
        dp[1]=1;
        
        if(n==0 || n==1) return n;
        
        for(i=2;i<=n;i++)
        {
            j=1;
            dp[i]=INT_MAX;
            while(j<i)
            {
                if(i-j*j>=0) 
                {
                    dp[i]=min(dp[i],1+dp[i-j*j]);
                }
                j++;
            }
            if(dp[i]==INT_MAX) dp[i]=i;
        }
        return dp[n];
    }
};
