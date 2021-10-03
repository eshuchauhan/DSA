Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".


class Solution {
public:
    string removeDuplicates(string s) {
        int i,n=s.size();
        stack<char>st;
        
        for(i=0;i<n;i++)
        {
            if(st.size()==0 || st.top()!=s[i])
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
        }
        string ans="";
        while(st.size()>0)
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
