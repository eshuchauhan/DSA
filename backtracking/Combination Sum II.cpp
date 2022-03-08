class Solution {
public:
    
    void helper(vector<int>&a, int target,int i,vector<int>&v,vector<vector<int>>&ans)
    {
        if(target==0) 
        {
            ans.push_back(v);
            return;
        }
        
        if(i>=a.size() || target<0) return;
    
        v.push_back(a[i]);
        helper(a,target-a[i],i+1,v,ans);
        v.pop_back();
        
        while(i<a.size()-1 and a[i]==a[i+1])
        {
            i++;
        }
        
        helper(a,target,i+1,v,ans);
    }
    
    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        vector<vector<int>>ans;
        sort(a.begin(),a.end());
        vector<int>v;
        
        helper(a,target,0,v,ans);
        
        return ans;
    }
};
