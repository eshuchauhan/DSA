class Solution {
public:
    int findLongestChain(vector<vector<int>>& a) {
        
        int i,j,n=a.size();
        
        sort(a.begin(),a.end());
        
        int dp[n],ans=1;
        dp[0]=1;
        
        for(i=1;i<n;i++)
        {
            j=0,dp[i]=1;
            while(j<i)
            {
                if(a[i][0]>a[j][1])
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
                j++;
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
