class Solution {
public:
    
    int maxProduct(vector<int>& a) {
        int n=a.size(),i;
        int maxi=a[0];
        int mini=a[0];
        int result=a[0];
        
        for(i=1;i<n;i++)
        {
            if(a[i]<0)
            {
                swap(maxi,mini);
            }
            maxi=max(a[i],maxi*a[i]);
            mini=min(a[i],mini*a[i]);
            
            result=max(result,maxi);
        }
        return result;
    }
};
