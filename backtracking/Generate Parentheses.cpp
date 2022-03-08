class Solution {
public:
    void helper(string curr, int o, int c, vector<string>&v,int n)
    {
        if(o+c==2*n)
        {
            v.push_back(curr);
            return;
        }
        if(o<n) helper(curr+"(", o+1,c,v,n);
        if(c<o) helper(curr+")",o,c+1,v,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper("(",1,0,ans,n);
        return ans;
    }
};
