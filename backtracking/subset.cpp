class Solution {
public:
    void helper(vector<int>&a,vector<int>v,vector<vector<int>>&ans,int index)
    {
        int n=a.size();
        
        if(index==n)
        {
            ans.push_back(v);
            return;
        }
        
        v.push_back(a[index]);
        helper(a,v,ans,index+1);
        v.pop_back();
        helper(a,v,ans,index+1);
        
    }
    vector<vector<int>> subsets(vector<int>& a) {
        
        vector<vector<int>>ans;
        vector<int>v;
        helper(a,v,ans,0);
        return ans;
    }
};



class Solution {
public:
    void helper(vector<int>&a,vector<int>v,vector<vector<int>>&ans,int index)
    {
        int n=a.size();
        
        if(index==n)
        {
            ans.push_back(v);
            return;
        }
        helper(a,v,ans,index+1);
        v.push_back(a[index]);
        helper(a,v,ans,index+1);
        v.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& a) {
        
        vector<vector<int>>ans;
        vector<int>v;
        helper(a,v,ans,0);
        return ans;
    }
};
