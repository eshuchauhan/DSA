class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n=a.size(),i,ans=INT_MIN,sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            ans=max(ans,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return ans;
    }
};
