// Input:
// N = 8
// A[] = {15,-2,2,-8,1,7,10,23}
// Output: 5
// Explanation: The largest subarray with
// sum 0 will be -2 2 -8 1 7.

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        // Your code here
        map<int,int>m;
        m.insert({0,-1});
        int sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(m.find(sum)==m.end())
            {
                m.insert({sum,i});
            }
            else if(m.find(sum)!=m.end())
            {
                int x=m[sum];
                ans=max(ans,i-x);
            }
        }
        return ans;
    }
};
