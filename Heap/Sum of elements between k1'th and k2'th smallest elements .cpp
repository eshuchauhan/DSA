    int solve(long long a[], long long n, long long k)
    {
        priority_queue<int>p;
        
        for(int i=0;i<n;i++)
        {
            p.push(a[i]);
            if(p.size()>k)
            p.pop();
        }
        return p.top();
    }
    long long sumBetweenTwoKth( long long a[], long long n, long long k1, long long k2)
    {
        // Your code goes here
        long long x=solve(a,n,k1);
        long long y=solve(a,n,k2);
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>x and a[i]<y)
            {
                sum=sum+a[i];
            }
        }
        // cout<<endl<<x<<" "<<y<<endl;
        return sum;
    }
