int minDifference(int arr[], int n)  
	{ 
	    int sum=0;
	    for(int i=0;i<n;i++) sum+=arr[i];
	    
	    int dp[n+1][sum+1];
	    for(int i=0;i<sum+1;i++) dp[0][i]=0;
	    for(int i=0;i<n+1;i++) dp[i][0]=1;
	    
	    for(int i=1;i<n+1;i++)
	    {
	        for(int j=1;j<sum+1;j++)
	        {
	            if(arr[i-1]<=j)
	            {
	                dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
	            }
	            else
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    
	    vector<int> range;
	    for(int j=0;j<=sum/2;j++)
	    {
	        if(dp[n][j]==1) range.push_back(j);
	    }
	    
	    int ans=INT_MAX;
	    for(int i=0;i<range.size();i++)
	    {
	        ans=min(ans,sum-2*range[i]);
	    }
	    return ans;
	} 
