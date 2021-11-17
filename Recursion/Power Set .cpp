	void powerset(string s , int i , string curr , vector<string>&v)
	{
	    if(i==s.size())
	    {
	        if(curr!="")
	        v.push_back(curr);
	        return;
	    }
	    
	    powerset(s, i+1 , curr+s[i] ,v);
	    powerset(s, i+1 , curr,v);
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    
		    vector<string>v;
		    string curr="";
		    powerset(s,0,curr,v);
		    sort(v.begin(),v.end());
		    return v;
		}
