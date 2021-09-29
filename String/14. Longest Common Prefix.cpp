class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[strs.size()-1];
        
        int x=min(s1.size(),s2.size()),i;
        string ans="";
        for(i=0;i<x;i++)
        {
            if(s1[i]==s2[i])
            {
                if(ans.size()==0)
                {
                    ans=s1[i];
                }
                else
                {
                    ans=ans+s1[i];
                }
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
