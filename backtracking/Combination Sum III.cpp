class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>&v,int k,int n,int i)
    {
        if(i>9)
        {
            if(n==0 and v.size()==k) ans.push_back(v);
            return;
        }
        v.push_back(i);
        helper(ans,v,k,n-i,i+1);
        v.pop_back();
        helper(ans,v,k,n,i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>>ans;
        vector<int>v;
        
        helper(ans,v,k,n,1);
        return ans;
    }
};
