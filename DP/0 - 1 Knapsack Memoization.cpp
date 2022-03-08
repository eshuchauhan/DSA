int t[1001][1001];
    int helper(int W, int wt[], int val[], int n)
    {
       if(n==0 || W==0) return 0;
       
       if(t[n][W]!=-1) return t[n][W];
       
       
       if(wt[n-1]<=W)
       {
           return t[n][W]=max(val[n-1]+helper(W-wt[n-1],wt,val,n-1),helper(W,wt,val,n-1));
       }
       else if(wt[n-1]>W)
       {
           return t[n][W]=helper(W,wt,val,n-1);
       }
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        memset(t,-1,sizeof(t));
        
        helper(W,wt,val,n);
    }
