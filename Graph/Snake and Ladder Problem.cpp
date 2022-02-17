int minThrow(int n, int a[]){
        // code here
        unordered_map<int,int>m;
        
        for(int i=0;i<2*n;i=i+2)
        {
            m[a[i]]=a[i+1];
        }
        
        vector<int>vis(31,0);
        queue<int>q;
        
        q.push(1);
        vis[1]=1;
        
        int steps=0;
        
        while(q.size()>0)
        {
            int size=q.size();
            
            for(int i=0;i<size;i++)
            {
                int x=q.front();
                q.pop();
                
                if(x==30) return steps;
                
                for(int j=1;j<=6;j++)
                {
                    if(x+j>30) break;
                    if(vis[x+j]==0)
                    {
                        vis[x+j]=1;
                        if(m.find(x+j)==m.end())
                        {
                            q.push(x+j);
                        }
                        else
                        {
                            q.push(m[x+j]);
                        }
                    }
                }
            }
            steps++;
        }
        return steps;
    }
