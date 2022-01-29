int minRepeats(string s1, string s2) 
    {
        int i,j,count=1;
        string x=s1;
        int n=s2.size()/s1.size();
        for(i=1;i<=n+2;i++) 
        {
            if(s1.find(s2)!=string::npos) 
            {
                return count;
            }
            s1=s1+x;
            count++;
        }
        retur
