class Solution {
public:
    int isPrefixOfWord(string s, string search) {
        int i=0,n=s.size(),count=0;
        while(i<n)
        {
            int j=i+1;
            
            while(j<s.size() && isalpha(s[j]))
            {
                j++;
            }
            string edit=s.substr(i,j-i);
            count++;
            int x=search.size();
            
            if(edit.substr(0,x)==search)
            {
                return count;
            }
            i=j+1;
        }
        return -1;
    }
};
