// [4,4,4,1,4]
class Solution {
public:
    void helper(vector<int>&a,vector<int>&v,vector<vector<int>>&ans,int i,bool flag)
    {
        int n=a.size();
        
        if(i==n)
        {
            ans.push_back(v);
            return;
        }
       
        helper(a,v,ans,i+1,false);
        if(i>0 and a[i]==a[i-1] and flag==false) return;
        v.push_back(a[i]);
        helper(a,v,ans,i+1,true);
        v.pop_back();
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        vector<vector<int>>ans;
        sort(a.begin(),a.end());
        vector<int>v;

        helper(a,v,ans,0,true);
        
        return ans;
    }
};
