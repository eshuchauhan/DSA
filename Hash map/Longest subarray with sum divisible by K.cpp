int longSubarrWthSumDivByK(int a[], int n, int k)
	{
	    // Complete the function
	    int i,j;
	    map<int,int>m;
	    m.insert({0,-1});
	    int sum=0,ans=0;
	    for(i=0;i<n;i++)
	    {
	        sum=sum+a[i];
	        int rem=sum%k;
	       
	        if(rem<0)
	        rem=rem+k;
	        
	        if(m.find(rem)!=m.end())
	        {
	            auto x=m[rem];
	            ans=max(ans,i-x);
	        }
	        else
	        {
	            m[rem]=i;
	        }
	    }
	    return ans;
	}
