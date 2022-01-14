int kthSmallest(int a[], int l, int r, int k) {
        //code here
        priority_queue<int,vector<int>> p;
        
        for(int i=0;i<=r;i++)
        {
            p.push(a[i]);
            if(p.size()>k)
            {
                p.pop();
            }
        }
        return p.top();
    }
