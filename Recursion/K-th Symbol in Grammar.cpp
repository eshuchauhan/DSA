class Solution {
public:
    
    int helper(int n,int k)
    {
        if(n==1 && k==1) return 0;
        int mid=pow(2,n-1)/2;
        if(k<=mid)
        {
            return helper(n-1,k);
        }
        else if(k>mid)
        {
            return !helper(n-1,k-mid);
        }
        return 0;
    }
    int kthGrammar(int n, int k) {
        
        return helper(n,k);
    }
};
