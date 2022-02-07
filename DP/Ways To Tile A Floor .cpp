long long mod=1e9+7;
    long long numberOfWays(long long n) {
        //code here
        long long dp[n+1];
        dp[1]=1;
        dp[2]=2;
        for(long long i=3;i<=n;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        return dp[n];
    }
