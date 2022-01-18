bool isSubsetSum(int n, int arr[], int sum){
        // code here 
        int a[n+1][sum+1],i,j;
        
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(i==0) a[i][j]=false;
                if(j==0) a[i][j]=true;
            }
        }
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=sum;j++)
            {
                if(j<arr[i-1])
                {
                    a[i][j]=a[i-1][j-1];
                }
                else
                {
                    a[i][j]=(a[i-1][j-1] || a[i-1][j-arr[i-1]]);
                }
            }
        }
        return a[n][sum];
    }
