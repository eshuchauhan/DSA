class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>ans;
        
        int i,j=0;
        
        vector<int>map1(26,0),map2(26,0);
        
        if(p.size()>s.size()) return ans;
        
        for(i=0;i<p.size();i++)
        {
            map1[s[i]-'a']++;
            
            map2[p[i]-'a']++;
        }
        
        i=p.size()-1;
        
        while(i<s.size())
        {
            if(map1==map2)
            {
                ans.push_back(j);
            }
            i++;
            if(i!=s.size())
            {
                map1[s[i]-'a']++;
                map1[s[j]-'a']--;
            }
            j++;
        }
        return ans;
    }
};
