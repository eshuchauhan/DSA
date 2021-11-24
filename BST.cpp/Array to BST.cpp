void helper(vector<int>&v,int low,int high,vector<int>&ans)
{
    if(low>high) return;
    int mid=(low+high)/2;
    ans.push_back(v[mid]);
    helper(v,low,mid-1,ans);
    helper(v,mid+1,high,ans);
}
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>s;
        helper(nums,0,nums.size()-1,s);
        return s;
    }
};
