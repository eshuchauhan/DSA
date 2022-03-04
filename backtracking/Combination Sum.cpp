class Solution {
public:
    void helper(vector<int>&a, int target,vector<vector<int>>&ans,vector<int>&v,int i)
    {
        if(target==0) ans.push_back(v);
        
        if(target<=0 || i==a.size()) return;
        
        v.push_back(a[i]);
        helper(a,target-a[i],ans,v,i);
        v.pop_back();
        helper(a,target,ans,v,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(a,target,ans,v,0);
        return ans;
    }
};
