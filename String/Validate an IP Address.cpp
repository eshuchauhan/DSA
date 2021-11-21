class Solution {
    public:
        int isValid(string s) {
            // code here
            int i,n=s.size();
            int dots=0;
            for(i=0;i<n;i++)
            {
                if(s[i]=='.')
                {
                    dots++;
                }
            }
            if(dots!=3) return 0;
            unordered_set<string>st;
            for(i=0;i<256;i++)
            {
                st.insert(to_string(i));
            }
            string str="";
            int count=0;
            for(i=0;i<n;i++)
            {
                if(s[i]!='.')
                {
                    str=str+s[i];
                }
                else
                {
                    if(st.count(str)!=0) count++;
                    str="";
                }
            }
            if(st.count(str)!=0) count++;
            if(count==4)return 1;
            return 0;
        }
};
