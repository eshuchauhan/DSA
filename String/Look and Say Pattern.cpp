string helper(int n,string &s)
  {
      if(n==1)
      {
          return s;
      }
      string str="";
      int count=1;
      for(int i=0;i<s.size();i++)
      {
          if(i!=s.size()-1 && s[i]==s[i+1])
          {
              count++;
          }
          else
          {
              str=str+(to_string(count))+s[i];
              count=1;
          }
      }
      s=str;
      return helper(n-1,s);
  }
  
    string lookandsay(int n) {
        // code here
        string s="1";
        return helper(n,s);
    }   
};
