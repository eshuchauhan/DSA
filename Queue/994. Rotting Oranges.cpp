class Solution {
public:
    int orangesRotting(vector<vector<int>>& a) {
        int row=a.size();
        int col=a[0].size();
        queue<pair<int,int>>q;
        int fresh=0,t=0,i,j;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(a[i][j]==2)
                {
                    q.push({i,j});
                }
                else if(a[i][j]==1)
                {
                    fresh++;
                } 
            }
        }
        while(q.size()!=0)
        {
            int n=q.size();
            for(i=0;i<n;i++)
            {
                int x=q.front().first,y=q.front().second;
                
                q.pop();
                
                if(x>0 && a[x-1][y]==1)
                {
                    a[x-1][y]=2;
                    fresh--;
                    q.push({x-1,y});
                }
                if(x<row-1 && a[x+1][y]==1)
                {
                    a[x+1][y]=2;
                    fresh--;
                    q.push({x+1,y});
                }
                if(y>0 && a[x][y-1]==1)
                {
                    a[x][y-1]=2;
                    fresh--;
                    q.push({x,y-1});
                }
                if(y<col-1 && a[x][y+1]==1)
                {
                    a[x][y+1]=2;
                    fresh--;
                    q.push({x,y+1});
                }
            }
            if(q.size()!=0) t++;
        }
        if(fresh==0)
        {
            return t;
        }
        return -1;
    }
};
