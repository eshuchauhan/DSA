class Solution {
public:
    int minimumMountainRemovals(vector<int>& a) {
        int i,j,n=a.size();
        
        int lis[n],lds[n];
        
        lis[0]=1;
        lds[n-1]=1;
        
        for(i=1;i<n;i++)
        {
            j=0;
            lis[i]=1;
            while(j<i)
            {
                if(a[j]<a[i])
                {
                    lis[i]=max(lis[i],1+lis[j]);
                }
                j++;
            }
        }
        
        for(i=n-2;i>=0;i--)
        {
            j=n-1;
            lds[i]=1;
            while(j>i)
            {
                if(a[i]>a[j])
                {
                    lds[i]=max(lds[i],1+lds[j]);
                }
                j--;
            }
        }
        int l=0;
        for(i=0;i<n;i++) if(lis[i]>1 and lds[i]>1) l=max(lis[i]+lds[i]-1,l);
        
        return n-l;
    }
};


