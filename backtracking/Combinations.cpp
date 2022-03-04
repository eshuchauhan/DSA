class Solution {
public:
    
    void helper(int i,int n,int k,vector<vector<int>>&ans,vector<int>&v)
    {        
        if(i>n)
        {
            if(v.size()==k) ans.push_back(v);
            return;
        }

        v.push_back(i);
        helper(i+1,n,k,ans,v);
        v.pop_back();
        helper(i+1,n,k,ans,v);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(1,n,k,ans,v);
        return ans;
    }
};
