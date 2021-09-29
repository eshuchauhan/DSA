// Input:
// N = 4
// A[] = {0,1,0,1}
// Output: 4
// Explanation: The array from index [0...3]
// contains equal number of 0's and 1's.
// Thus maximum length of subarray having
// equal number of 0's and 1's is 4.

class Solution{
  public:
    int maxLen(int a[], int n)
    {
        // Your code here
        map<int,int>m;
        m.insert({0,-1});
        int sum=0,ans=0;;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                sum--;
            }
            else if(a[i]==1)
            {
                sum++;
            }
            
            if(m.find(sum)!=m.end())
            {
                int x=m[sum];
                ans=max(ans,i-x);
            }
            else
            {
                m.insert({sum,i});
            }
        }
        return ans;
    }
};
