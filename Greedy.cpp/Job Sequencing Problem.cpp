static bool comparator(Job a,Job b)
    {
        return a.profit>b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job a[], int n) 
    { 
        // your code here
        vector<int>v;
        sort(a,a+n,comparator);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++) maxi=max(maxi,a[i].dead);
        
        int hash[maxi+1]={0};
        memset(hash,-1,sizeof(hash));
        
        int c=0,ans=0;

        for(int i=0;i<n;i++)
        {
            for(int j=a[i].dead;j>0;j--)
            {
                if(hash[j]==-1)
                {
                    hash[j]=i;
                    ans=ans+a[i].profit;
                    c++;
                    break;
                }
            }
        }
        v.push_back(c);
        v.push_back(ans);
        return v;
    } 
