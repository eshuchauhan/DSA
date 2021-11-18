int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int i=1,j=0,ans=1;
    	
    	while(i<n && j<n)
    	{
    	    if(arr[i]>dep[j])
    	    {
    	        j++;
    	    }
    	    else
    	    {
    	        ans++;
    	    }
    	    i++;
    	}
    	return ans;
    }
