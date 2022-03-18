class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        
        int i,n=a.size(),ans=1;
        
        vector<int>dp(n,1);
        
        dp[0]=1;
        
        for(i=1;i<n;i++)
        {
            int count=0,j=0;
            while(j<i)
            {
                if(a[j]<a[i]) dp[i]=max(dp[i],dp[j]+1);
                    
                j++;
            }
            
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
