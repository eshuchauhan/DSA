int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int t[n+1][W+1];
       
       for(int i=0;i<=n;i++)
       {
           for(int j=0;j<=W;j++)
           {
               if(i==0 || j==0)
               {
                   t[i][j]=0;
               }
               else if(j<wt[i-1])
               {
                   t[i][j]=t[i-1][j];
               }
               else
               {
                   t[i][j]=max(t[i-1][j],val[i-1]+t[i-1][j-wt[i-1]]);
               }
           }
       }
       return t[n][W];
    }
