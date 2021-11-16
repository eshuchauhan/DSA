class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k)
    { 
        // Complete the function
        map<int,int>m;
        int sum=0,i,maxi=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(sum==k)
            {
                maxi=max(maxi,i+1);
            }
            if(m.find(sum)==m.end())
            {
                m[sum]=i;
            }
            if(m.find(sum-k)!=m.end())
            {
                maxi=max(maxi,i-m[sum-k]);
            }
        }
        return maxi;
    } 

};
