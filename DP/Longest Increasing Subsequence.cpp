int longestSubsequence(int n, int a[])
    {
       // your code here
       int dp[n];
       fill(dp,dp+n,1);
       int maxi=INT_MIN;
       for(int i=1;i<n;i++)
       {
           for(int j=i-1;j>=0;j--)
           {
               if(a[j]<a[i])
               {
                   dp[i]=max(dp[i],dp[j]+1);
               }
           }
       }
       for(int i=0;i<n;i++) maxi=max(maxi,dp[i]);
       return maxi;
    }
