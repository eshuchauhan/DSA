string findSubString(string str)
    {
        // Your code goes here
        map<char,int>m;
        set<char>s(str.begin(),str.end());
        int x=s.size();
        int i=0,j=0,ans=INT_MAX,first=0,last=0;
        int count=0;
        while(j<str.size())
        {
            if(j<str.size() and m.size()!=x)
            {
                m[str[j]]++;
                j++;
            }
            else if(m.size()==x)
            {
                count=j-i+1;
                if(ans>count)
                {
                    ans=count;
                    first=i,last=j;
                }
                m[str[i]]--;
                if(m[str[i]]==0) m.erase(str[i]);
                i++;
            }
        }
        while(m.size()==x)
        {
            count=j-i+1;
            if(ans>count)
            {
                ans=count;
                first=i,last=j;
            }
            m[str[i]]--;
            if(m[str[i]]==0) m.erase(str[i]);
            i++;
        }
        // cout<<ans<<endl;
        return str.substr(first,last-first);
    }
