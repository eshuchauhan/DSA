class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& a, int n) 
    {
        // code here
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        
        while(s.size()>=2)
        {
            int i=s.top();
            s.pop();
            int j=s.top();
            s.pop();
            
            if(a[i][j]==1)
            {
                s.push(j);
            }
            else if(a[i][j]==0)
            {
                s.push(i);
            }
        }
        
        int x=s.top();
        for(int i=0;i<n;i++)
        {
            if(i!=x)
            {
                if(a[x][i]==1 || a[i][x]==0)
                {
                    return -1;
                }
            }
        }
        return x;
    }
};
