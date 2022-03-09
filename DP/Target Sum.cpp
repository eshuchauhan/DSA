class Solution {
public:
    int helper(int n, vector<int>&arr, int sum){
        int a[n+1][sum+1],i,j;
        
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(i==0) a[i][j]=0;
                if(j==0) a[i][j]=1;
            }
        }
        
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(j<arr[i-1]) a[i][j]=a[i-1][j];
                
                else a[i][j]=(a[i-1][j] + a[i-1][j-arr[i-1]]);
            }
        }
         return a[n][sum];
    }
    int findTargetSumWays(vector<int>& a, int target) {
        target=abs(target);
        int sum=0;
        for(int i=0;i<a.size();i++) sum=sum+a[i];
        if(sum<target || (sum+target)%2!=0) return 0;
        
        return helper(a.size(),a,(target+sum)/2);
    }
};
