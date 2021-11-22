void helper(string s,int l,int r,vector<string>&v)
	{
	    if(l==r)
	    {
	        v.push_back(s);
	    }
	    for(int i=l;i<=r;i++)
	    {
	        swap(s[i],s[l]);
	        helper(s,l+1,r,v);
	        swap(s[i],s[l]);
	    }
	}
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    vector<string>v;
		    helper(s,0,s.size()-1,v);
		    sort(v.begin(),v.end());
		    return v;
		}
