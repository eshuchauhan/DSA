vector<string>all;
  void powerset(string s,int i,string ans)
  {
      if(i==s.size())
      {
          all.push_back(ans);
          return;
      }
      powerset(s,i+1,ans+s[i]);
      powerset(s,i+1,ans);
  }
    set<string> allPossibleSubsequences(string s) {
        // code here
        powerset(s,0,"");
        set<string>op;
        
        for(int i=0;i<all.size();i++)
        {
            string x=all[i];
            if(x[0]=='a' || x[0]=='e' || x[0]=='i' || x[0]=='o' || x[0]=='u')
            {
                int n=x.size();
                if(x[n-1]!='a' and x[n-1]!='e' and x[n-1]!='i' and x[n-1]!='o' and x[n-1]!='u')
                {
                    op.insert(x);
                }
            }
        }
        return op;
    }
