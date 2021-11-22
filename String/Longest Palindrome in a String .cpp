void helper(string s)
  {
      int n=s.size();
      
      int low,high;

      int start=0,end=1;
      
      for(int i=1;i<n;i++)
      {
          low=i-1;
          high=i;
        //   even size string
          while(low>=0 && high<n && s[low]==s[high])
          {
              if(high-low+1>end)
              {
              start=low;
              end=high-low+1;
              }
              low--;high++;
          }
          
          low=i-1;
          high=i+1;
        //   odd size string
          while(low>=0 && high<n && s[low]==s[high])
          {
              if(high-low+1>end)
              {
              start=low;
              end=high-low+1;
              }
              low--;high++;
          }
      }
      for(int i=start;i<=end+start-1;i++)
      {
          cout<<s[i];
      }
      
  }
    string longestPalin (string s) {
        // code here
        helper(s);
        
    }
