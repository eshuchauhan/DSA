class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int i,j=0,maxi=0;
        set<char>s;
        
        if(str=="")
        {
            return 0;
        }
        
        for(i=0;i<str.size();)
        {
            if(s.find(str[i])==s.end())
            {
                s.insert(str[i]);
                maxi=max(maxi,i-j+1);
                i++;
            }
            else
            {
                s.erase(str[j]);
                j++;
            }
        }
        return maxi;
    }
};
