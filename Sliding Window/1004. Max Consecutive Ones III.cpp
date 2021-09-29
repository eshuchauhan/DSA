class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int i,j=0,ans=0,zerocount=0;
        
        for(i=0;i<a.size();i++)
        {
            if(a[i]==0)
            {
                zerocount++;
            }
            
            while(zerocount>k)
            {
                if(a[j]==0)
                {
                    zerocount--;
                }
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
