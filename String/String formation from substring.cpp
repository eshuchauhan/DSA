Input: s = "ababab"
Output: 1
Explanation: It is contructed by 
appending "ab" 3 times	


int isRepeat(string s)
	{
	    // Your code goes here
	    string x=s+s;
	    for(int i=1;i<=2*s.size()-s.size()-1;i++)
	    {
	        if(x.substr(i,s.size())==s)
	        {
	            return true;
	        }
	    }
	    return false;
	}
