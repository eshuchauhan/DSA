class Solution {
public:
    bool isSubsetSum(int n, vector<int>arr, int sum){
        int t[n+1][sum+1],i,j;
        
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(i==0) t[i][j]=false;
                if(j==0) t[i][j]=true;
            }
        }
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=sum;j++)
            {
                if(j<arr[i-1])
                {
                    t[i][j]=t[i-1][j];
                }
                else
                {
                    t[i][j]=(t[i-1][j] || t[i-1][j-arr[i-1]]);
                }
            }
        }
        return t[n][sum];
    }
    bool canPartition(vector<int>& a) {
        int i,n=a.size(),sum=0;
        
        for(i=0;i<n;i++) sum=sum+a[i];
        if(sum%2!=0) return false;

        return isSubsetSum(n,a,sum/2);
    }
};
