 int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int a[y+1][x+1];
        
        for(int i=0;i<=y;i++)
        {
            for(int j=0;j<=x;j++)
            {
                if(i==0 || j==0) a[i][j]=0;
                
                else if(s2[i-1]==s1[j-1])
                {
                    a[i][j]=a[i-1][j-1]+1;
                }
                else
                {
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
                }
            }
        }
        return a[y][x];
    }
