int findSubArraySum(int a[], int n, int k)
    {
        // code here
        int count=0;
        map<int,int>m;
        m[0]=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(m.find(sum-k)!=m.end())
            {
                count=count+m[sum-k];
            }
            m[sum]++;
        }
        return count;
    }
