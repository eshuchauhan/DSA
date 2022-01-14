int maxDiamonds(int a[], int n, int k) {
        // code here
        priority_queue<int,vector<int>>p;
        
        for(int i=0;i<n;i++)
        {
            p.push(a[i]);
        }
        int sum=0;
        for(int i=0;i<k;i++)
        {
            int t=p.top();
            sum+=t;
            p.pop();
            p.push(t/2);
        }
        return sum;
    }
