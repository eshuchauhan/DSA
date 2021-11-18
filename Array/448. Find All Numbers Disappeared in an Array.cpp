vector<int> findDisappearedNumbers(vector<int>& a) {
    
        int i,n=a.size();
        vector<int>v;
        
        for(i=0;i<n;i++)
        {
            int x=abs(a[i])-1;
            
            if(a[x]>0)
            {
                a[x]=-a[x];
            }
        }
        
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                v.push_back(i+1);
            }
        }
        return v;
    }
