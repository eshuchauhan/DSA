// Number of connected components on grid
void dfs(vector<vector<char>>&a,int x,int y,int row,int col,vector<vector<bool>>&vis)
    {
        vis[x][y]=true;
        // up,left,right,down
        int ddx[4]={-1,0,0,1};
        int ddy[4]={0,-1,1,0};
        
        for(int i=0;i<4;i++)
        {
            int nx=x+ddx[i];
            int ny=y+ddy[i];
            
            if(nx>=0 and nx<=row-1 and ny>=0 and ny<=col-1)
            {
                if(a[nx][ny]=='1' and vis[nx][ny]==false)
                {
                    dfs(a,nx,ny,row,col,vis);
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& a) {
        
        int row=a.size(),col=a[0].size(),i,j,cnt=0;
        vector<vector<bool>>vis(row,vector<bool>(col,false));
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(a[i][j]=='1' and vis[i][j]==false)
                {
                    cnt++;
                    dfs(a,i,j,row,col,vis);
                }
            }
        }
        return cnt;
        
    }
