vector<int> kthLargest(int k, int a[], int n) {
        priority_queue<int,vector<int>,greater<int>>q;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            q.push(a[i]);
            if(q.size()<k)
            {
                v.push_back(-1);
            }
            else if(q.size()>k)
            {
                q.pop();
            }
            if(q.size()==k)
            {
                v.push_back(q.top());
            }
            
            
        }
        return v;
    }
