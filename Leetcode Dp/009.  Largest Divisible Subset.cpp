class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& a) {
        
       sort(a.begin(),a.end());
        
        int i,j,n=a.size();
        
        int dp[n],ans=INT_MIN,index=-1;
        
        vector<int>parent(n,-1);
        vector<int>result;
        
        for(i=0;i<n;i++)
        {
            j=0,dp[i]=1;
            
            while(j<i)
            {
                if(a[i]%a[j]==0 and dp[i]<=1+dp[j])
                {
                    dp[i]=max(1+dp[j],dp[i]);
                    parent[i]=j;
                }
                j++;
            }
            if(ans<dp[i])
            {
                ans=dp[i];
                index=i;
            }
        }
        while(index!=-1)
        {
            result.push_back(a[index]);
            index=parent[index];
        }
        return result;
    }
};
