 bool helper(string s1,string s2)
    {
        int n=s1.size(),m=s2.size();
        string temp1="",temp2="";
        if(n<=2 && m<=2)
        {
            if(s1==s2) return true;
            return false;
        }
        
        temp1=temp1.append(s1.substr(2,n-2));
        temp1=temp1.append(s1.substr(0,2));
        
        temp2=temp2.append(s1.substr(n-2,2));
        temp2=temp2.append(s1.substr(0,n-2));
        
        if(temp1==s2 || temp2==s2) return true;
        return false;
    }
    bool isRotated(string st1, string st2)
    {
        // Your code here
        return helper(st1,st2);
    }
