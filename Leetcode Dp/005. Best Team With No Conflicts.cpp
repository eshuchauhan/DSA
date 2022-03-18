class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        
        vector<vector<int>>v;
        
        int i,j,n=scores.size(),ans;
        
        int dp[n];
        
        for(i=0;i<n;i++) v.push_back({ages[i],scores[i]});
        
        sort(v.begin(),v.end());
        
        dp[0]=v[0][1];
        
        ans=dp[0];
        
        for(i=1;i<n;i++)
        {
            j=0;
            dp[i]=v[i][1];
            while(j<i)
            {
                int x=v[j][1];
                int y=v[i][1];
                    
                if(y>=x)
                {
                    dp[i]=max(dp[i],dp[j]+y);
                }
                j++;
            }
            
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
