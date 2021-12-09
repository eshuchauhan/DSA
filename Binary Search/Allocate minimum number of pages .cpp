class Solution 
{
    public:
    
    bool IsPossible(int a[],int n,int m,int mid)
    {
        int pagesum=0,count=1;
        for(int i=0;i<n;i++)
        {
            if(pagesum+a[i]<=mid)
            pagesum+=a[i];
            else
            {
                count++;
                if(count>m || a[i]>mid)
                {
                    return false;
                }
                pagesum=a[i];
            }
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int a[], int n, int m) 
    {
        //code here
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        int ans=-1;
        int start=0,end=sum;
        
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(IsPossible(a,n,m,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};
