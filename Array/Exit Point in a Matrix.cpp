vector<int> FindExitPoint(vector<vector<int>>&a){
		// Code here
		vector<int>v;
		int n=a.size();
		int m=a[0].size();
		
		int i=0,j=0;
		int x=0;
		while(true)
		{
		    x=x+a[i][j];
		    x=x%4;
		    if(x==0)
		    {
		        if(a[i][j]==1) a[i][j]=0;
		        j++;
		    }
		    else if(x==1)
		    {
		        if(a[i][j]==1) a[i][j]=0;
		        i++;
		    }
		    else if(x==2)
		    {
		        if(a[i][j]==1) a[i][j]=0;
		        j--;
		    }
		    else
		    {
		        if(a[i][j]==1) a[i][j]=0;
		        i--;
		    }
		    
		    if(i<0 || j<0 || i>=n || j>=m)
		    {
		        break;
		    }
		}
		if(i<0) i++;
		else if(i>=n) i--;
		else if(j<0) j++;
		else if(j>=m) j--;
		
		v.push_back(i);
		v.push_back(j);
		
		return v;
		
    }
