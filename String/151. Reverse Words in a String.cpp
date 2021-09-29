class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string ans;
        
        while(i<s.size())
        {
            while(i<s.size() && s[i]==' ')
            {
                i++;
            }
            if(i>=s.size())
            {
                break;
            }
            int j=i+1;
            
            while(j<s.size() && s[j]!=' ')
            {
                j++;
            }
            string edit=s.substr(i,j-i);
            if(ans.size()==0)
            {
                ans=edit;
            }
            else
            {
                ans=edit+" "+ans;
            }
            i=j+1;
        }
        return ans;
    }
};
