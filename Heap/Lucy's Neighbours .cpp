vector<int> Kclosest(vector<int>a, int n, int x, int k) 
    { 
        // Your code goes here 
        priority_queue<pair<int,int>>p;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            p.push({abs(a[i]-x),a[i]});
            if(p.size()>k)
            {
                p.pop();
            }
        }
        
        while(p.size()>0)
        {
            pair<int,int>t;
            
            t=p.top();
            
            v.push_back(t.second);
            p.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }  
