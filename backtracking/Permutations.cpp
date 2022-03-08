class Solution {
public:
    void helper(vector<vector<int>>&v,vector<int>&a,int left,int right)
    {
        if(left==right) 
        {
            v.push_back(a);
            return;
        }
        
        for(int i=left;i<=right;i++)
        {
            swap(a[i],a[left]);
            helper(v,a,left+1,right);
            swap(a[i],a[left]);
        }
    }
    vector<vector<int>> permute(vector<int>& a) {
        
        vector<vector<int>>v;
        
        helper(v,a,0,a.size()-1);
        
        return v;
    }
};
