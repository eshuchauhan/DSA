class Solution {
public:
    bool PredictTheWinner(vector<int>& a) {
        int i,j,n=a.size();
        
        int dp[n][n];
        
        for(int g=0;g<n;g++)
        {
            for(i=0,j=g;j<n;i++,j++)
            {
                if(g==0) dp[i][j]=a[i];
                
                else if(g==1) dp[i][j]=max(a[i],a[j]);
                
                else
                {
                    int op1=a[i]+min(dp[i+2][j],dp[i+1][j-1]);
                    int op2=a[j]+min(dp[i][j-2],dp[i+1][j-1]);
                    
                    dp[i][j]=max(op1,op2);
                }
            }
        }
        int sum=0;
        int x=dp[0][n-1];
        
        for(i=0;i<n;i++) sum=sum+a[i];
        

        if(x>=sum-x) return true;
        return false;
    }
};
