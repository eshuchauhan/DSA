class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m1,m2;
        
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            m1[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            m2[t[i]]++;
        }
        for(auto it=m1.begin(),it2=m2.begin();it!=m1.end() && it2!=m2.end();it++,it2++)
        {
            if(it->first==it2->first && it->second==it2->second)
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};


