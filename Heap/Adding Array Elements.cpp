int minOperations(int a[], int n, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>p(a,a+n);
        int c=0;
        while(p.size()>0)
        {
            int x=p.top();
            p.pop();
            int y=p.top();
            p.pop();
            
            int z=x+y;
            if(x>=k and y>=k)
            {
                return c;
            }
            p.push(z);
            c++;
        }
        return 0;
    }
