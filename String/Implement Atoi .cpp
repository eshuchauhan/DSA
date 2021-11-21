class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int i,n=s.size();
        long long int x=0,sign=1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='-')
            {
                sign=-1*sign;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                return -1;
            }
            else
            {
                x=x*10+(s[i]-'0');
            }
        }
        return x*sign;
    }
};
