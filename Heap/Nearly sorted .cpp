vector <int> nearlySorted(int a[], int n, int k){
        // Your code here
        priority_queue<int,vector<int>,greater<int>>p;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            p.push(a[i]);
            if(p.size()>k)
            {
                ans.push_back(p.top());
                p.pop();
            }
        }
        while(p.size()>0)
        {
            ans.push_back(p.top());
            p.pop();
        }
        return ans;
    }
