int strstr(string s, string x)
{
     //Your code here
     int n=s.size(),m=x.size();
     for(int i=0;i<=n-m;i++)
     {
         if(s.substr(i,m)==x)
         return i;
     }
     return -1;
}
